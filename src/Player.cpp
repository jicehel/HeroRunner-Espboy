#include "Player.h"
#include "assets/levels.h"
#include "assets/tileset.h"
#include "assets/sprites.h"

void Player::begin(uint8_t const level) {

    uint16_t const offset = (level - 1) << 1;

    _state  = State::STAND_BY;
    _column = LEVEL_PLAYER_START[offset];
    _x      = TILE_LENGTH * _column;
    _line   = LEVEL_PLAYER_START[offset + 1];
    _y      = TILE_LENGTH * _line;
    _vx     = 0;
    _vy     = 0;
    _frame  = 0;

}

float_t const Player::x()      const { return _x; }
float_t const Player::y()      const { return _y; }
float_t const Player::vx()     const { return _vx; }
float_t const Player::vy()     const { return _vy; }
boolean const Player::isStop() const { return (_state == State::STAND_BY) ? (true) : (false); }

void Player::stop() {

    _state = State::STAND_BY;
    _vx = 0;
    _vy = 0;
    _frame = PLAYER_STAND_BY_FRAME;
    //_dist  = 0; 

}

void Player::runToLeft() {

    _state = State::RUN;
    _vx    = -_v_run;
    _counter     = 0;
    _start_frame = PLAYER_RUN_START_FRAME;
    _end_frame   = PLAYER_RUN_START_FRAME + PLAYER_RUN_FRAMES;
    _frame = PLAYER_RUN_START_FRAME;
    _column -= 1;
    
}

void Player::runToRight() {

    _state = State::RUN;
    _vx    = _v_run;
    _counter     = 0;
    _start_frame = PLAYER_RUN_START_FRAME;
    _end_frame   = PLAYER_RUN_START_FRAME + PLAYER_RUN_FRAMES;
    _frame = PLAYER_RUN_START_FRAME;
    _column += 1;


}
void Player::cableToLeft() {

    _state = State::ON_CABLE;
    _vx    = -_v_cable;
    _counter     = 0;
    _start_frame = PLAYER_CABLE_START_FRAME;
    _end_frame   = PLAYER_CABLE_START_FRAME + PLAYER_CABLE_FRAMES;
    _frame = PLAYER_CABLE_START_FRAME;
    _column -= 1;
    
}

void Player::cableToRight() {

    _state = State::ON_CABLE;
    _vx    = _v_cable;
    _counter     = 0;
    _start_frame = PLAYER_CABLE_START_FRAME;
    _end_frame   = PLAYER_CABLE_START_FRAME + PLAYER_CABLE_FRAMES;
    _frame = PLAYER_CABLE_START_FRAME;
    _column += 1;

}

void Player::climbUp() {

    _state = State::CLIMB;
    _counter     = 0;
    _start_frame = PLAYER_CLIMB_START_FRAME;
    _end_frame   = PLAYER_CLIMB_START_FRAME + PLAYER_CLIMB_FRAMES;
    _frame = PLAYER_CLIMB_START_FRAME;
    _vy  = -_v_climb;
    _line -= 1;    

}

void Player::climbDown() {

    _state = State::CLIMB;
    _counter     = 0;
    _start_frame = PLAYER_CLIMB_START_FRAME;
    _end_frame   = PLAYER_CLIMB_START_FRAME + PLAYER_CLIMB_FRAMES;
    _frame = PLAYER_CLIMB_START_FRAME;
    _vy =  _v_climb;
    _line += 1;   

}

void Player::fall() {

    _state = State::FALL;
    _counter     = 0;
    _start_frame = PLAYER_CLIMB_START_FRAME;
    _end_frame   = PLAYER_CLIMB_START_FRAME + PLAYER_CLIMB_FRAMES;
    _frame = PLAYER_CLIMB_START_FRAME;
    _vy  = _v_fall;
    _line += 1;   

}

void Player::update() {

    if (!(_state == State::STAND_BY)) {
        if ((_vx < 0 && _x + _vx >= 0) || (_vx > 0 && _x + PLAYER_WIDTH + _vx + 1 < LEVEL_WIDTH * TILE_LENGTH)) {
            _x += _vx;
        }    

        if ((_vy < 0 && _y + _vy >= 0) || (_vy > 0 && _y + PLAYER_HEIGHT + _vy < LEVEL_HEIGHT * TILE_LENGTH)) {
            _y += _vy;
        }

        if ((_vx < 0 && _x <= _column * TILE_LENGTH +2 ) || (_vx < 0 && _x <= 1) ||
            (_vx > 0 && _x >  _column * TILE_LENGTH +1 ) || (_vx > 0 && _x >= (LEVEL_WIDTH - 1) * TILE_LENGTH) ||
            (_vy < 0 && _y <= _line   * TILE_LENGTH  ) || (_vy < 0 && _y <= 1 )||
            (_vy > 0 && _y >  _line   * TILE_LENGTH  ) || (_vy > 0 && _y > (LEVEL_HEIGHT - 1) * TILE_LENGTH)) {

            Player::stop();

        } 
    }    

    switch (_state) {

        case State::RUN:
                    
            if (++_counter > PLAYER_RUN_FRAMES) {
                _counter = 0;
                _frame++; if (_frame < _end_frame) return;
                _frame = _start_frame;
            }  
            break;  
        

        case State::CLIMB:
            
            if (++_counter > PLAYER_CLIMB_FRAMES) {
                _counter = 0;
                _frame++; if (_frame < _end_frame) return;
                _frame = _start_frame;
            }
            break;


        case State::ON_CABLE:
            
            if (++_counter > PLAYER_CABLE_FRAMES) {
                _counter = 0;
                _frame++; if (_frame < _end_frame) return;
                _frame = _start_frame;
            }
            break;


        case State::FALL:
            
            if (++_counter > PLAYER_CLIMB_FRAMES) {
                _counter = 0;
                _frame++; if (_frame < _end_frame) return;
                _frame = _start_frame;
            }
            break;


        default:;

    }

}

void Player::draw(Camera const &camera, LGFX_Sprite *framebuffer) {

    bool const to_the_left = _vx < 0;

    framebuffer->pushImageRotateZoom(
        _x + (to_the_left ? PLAYER_WIDTH : 0) - camera.x,
        _y - camera.y,
        0,
        0,
        0,
        to_the_left ? -1 : 1, 1,
        PLAYER_WIDTH,
        PLAYER_HEIGHT,
        PLAYER + _frame * PLAYER_SIZE,
        TRANS_COLOR
    );

}

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