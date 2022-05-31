#pragma once

#include <ESPboy.h>
#include "Camera.h"


class TileMap {

    public:

        bool isShown(const uint8_t tile) const;
        bool isFall(uint8_t pox, uint8_t poy);
        bool isGround(uint8_t pox, uint8_t poy);
        bool isTreasure(uint8_t pox, uint8_t poy);
        bool isCable(uint8_t pox, uint8_t poy);
        bool isLadder(uint8_t pox, uint8_t poy);
        void draw(uint8_t const level, Camera const &camera, LGFX_Sprite * const framebuffer);
        boolean goldCompleted();


};

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