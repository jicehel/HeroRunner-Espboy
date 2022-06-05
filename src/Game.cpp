#include "Game.h"
#include "assets/levels.h"
#include "assets/tileset.h"
#include "assets/sprites.h"

void Game::begin() {

    _framebuffer = new LGFX_Sprite(&espboy.tft);
    _framebuffer->createSprite(TFT_WIDTH, TFT_HEIGHT);

    _level = 1;
    
    _player.begin(_level);
    
}

boolean Game::goldCompleted() {
    return true;
}

void Game::loop() {

    if (_player.isStop()) _readButtons();
    _update();
    _draw();

}

void Game::_readButtons() {

    if (_player.isStop() && _map.isFall(_player.x(),_player.y() + TILE_LENGTH ) && !_map.isCable(_player.x(),_player.y())) {

 		_player.fall();

    } else if (espboy.button.held(Button::LEFT)) {

        if (_player.x() >= TILE_LENGTH && _player.isStop()) {
            
            if (_map.isCable(_player.x(), _player.y()) && !_map.isGround(_player.x() - TILE_LENGTH, _player.y())) {
                // _framebuffer->drawString("cas 1",1,1);
                // _framebuffer->pushSprite(0, 0);
                _player.cableToLeft(); 
                // delay(500);
            } else if(!_map.isGround(_player.x() - TILE_LENGTH, _player.y())) {
                // _framebuffer->drawString("cas 2",1,1);
                // _framebuffer->pushSprite(0, 0);
                _player.runToLeft();
                // delay(500);
            } else if (_player.x() > 0 && !_map.isGround(_player.x() - TILE_LENGTH, _player.y())) {
                // _framebuffer->drawString("cas 3",1,1);
                // _framebuffer->pushSprite(0, 0);
                _player.runToLeft(); 
                // delay(500);
            } else {
                // _framebuffer->drawString("cas 4",1,1);
                // _framebuffer->pushSprite(0, 0);
                _player.stop();   
                // delay(500); 
            }    
        } else {
            if (_player.x() > 0 && _player.isStop()) {
                // _framebuffer->drawString("cas 5",1,1);
                // _framebuffer->pushSprite(0, 0);
                _player.runToLeft(); 
                // delay(500);
            } else {    
                // _framebuffer->drawString("cas 6",1,1);
                // _framebuffer->pushSprite(0, 0);
                _player.stop();   
                // delay(500);
            }
        }     


    } else if (espboy.button.held(Button::RIGHT)) {

        if ((_player.x()  + PLAYER_WIDTH + TILE_LENGTH) < LEVEL_WIDTH * TILE_LENGTH && _player.isStop())
            if (_map.isCable(_player.x(), _player.y()) && !_map.isGround(_player.x() + TILE_LENGTH, _player.y()))
                _player.cableToRight(); 
            else if(!_map.isGround(_player.x() + TILE_LENGTH, _player.y())) 
                _player.runToRight();
            else if (_player.x() + PLAYER_WIDTH + TILE_LENGTH < LEVEL_WIDTH * TILE_LENGTH && !_map.isGround(_player.x() + TILE_LENGTH, _player.y()))
                _player.runToRight();
            else
                _player.stop();    
        else 
            if (_player.x() + PLAYER_WIDTH < LEVEL_WIDTH && _player.isStop())
                 _player.cableToRight(); 
            else     
                _player.stop();   


    } else if (
        espboy.button.released(Button::LEFT) ||
        espboy.button.released(Button::RIGHT)
    ) {

        _player.stop();

    }
    
    if (espboy.button.held(Button::UP)) {

        if (_player.y()  > 0 && _player.isStop())
            if(_map.isLadder(_player.x(), _player.y()))
                _player.climbUp();
            else
                _player.stop();    
        else 
            _player.stop();   


    } else if (espboy.button.held(Button::DOWN)) {

        if (_player.y()  <= TFT_HEIGHT - TILE_LENGTH && _player.isStop())
            if(_map.isLadder(_player.x(), _player.y() + TILE_LENGTH))
                _player.climbDown();
            else if (_player.isStop() && _map.isFall(_player.x(),_player.y() + TILE_LENGTH )) {
         		_player.fall();
            } else
                _player.stop();    
        else 
            _player.stop();  

    }

    if (espboy.button.held(Button::TOP_LEFT)) {

        _previousLevel();

    } else if (espboy.button.held(Button::TOP_RIGHT)) {

        _nextLevel();

    }

}

void Game::_update() {

    _player.update();

    _camera.follow(
        _player.x() - ((TFT_WIDTH  - PLAYER_WIDTH)  >> 1),
        _player.y() - ((TFT_HEIGHT - PLAYER_HEIGHT) >> 1)
    );

}

void Game::_draw() {

    _framebuffer->clear();

    _map.draw(_level, _camera, _framebuffer);
    _player.draw(_camera, _framebuffer);

    /* Debug part
    _framebuffer->setTextColor(0xffff);
    _framebuffer->drawNumber(_player.x(),  0, 1);
    _framebuffer->drawNumber(_player.y(), 25, 1);
    _framebuffer->drawNumber(_player.vx(), 50, 1);
    _framebuffer->drawNumber(_player.dist(), 75, 1);
    _framebuffer->drawNumber((LEVEL_WIDTH * TILE_LENGTH - PLAYER_WIDTH), 100, 1);  

    // _framebuffer->drawNumber(!_map.isGround(_player.x() - TILE_LENGTH, _player.y()), 41, 1);
     //_framebuffer->drawString(_player.message, 1, 1);
                                                           */

    _framebuffer->pushSprite(0, 0);


}

void Game::_previousLevel() { if (_level > 1)            _player.begin(--_level); }
void Game::_nextLevel()     { if (_level < LEVEL_NUMBER) _player.begin(++_level); }

/**
 * ----------------------------------------------------------------------------
 * Lode Runner game bootstrap
 * ----------------------------------------------------------------------------
 * Copyright (c) 2022 Stéphane Calderoni (https://github.com/m1cr0lab)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 * ----------------------------------------------------------------------------
 */