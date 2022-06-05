#pragma once

#include <ESPboy.h>
#include "Camera.h"

class Player {

    public:

        void begin(uint8_t const level);

        float_t const x()    const;
        float_t const y()    const;
        float_t  const dist() const;
        boolean  const isStop() const;

        void stop();
        void runToLeft();
        void runToRight();
        void cableToLeft();
        void cableToRight();

        void climbUp();
        void climbDown();
        void fall();

        void update();
        void draw(Camera const &camera, LGFX_Sprite *framebuffer);

    private:

        enum class State : uint8_t {
            STAND_BY,
            RUN,
            ON_CABLE,
            FALL,
            DIG,
            CLIMB,
            UNDIG
        };

        State    _state;

        float_t  _v_run   = 0.6;
        float_t  _v_cable = 0.4;
        float_t  _v_climb = 0.25;
        float_t  _v_fall  = 1;


  
        float_t _x;
        float_t _y;
        float_t  _vx;
        float_t  _vy;
        float_t  _dist;
        uint8_t  _frame;
        uint8_t  _start_frame;
        uint8_t  _end_frame;
        uint8_t  _counter;

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