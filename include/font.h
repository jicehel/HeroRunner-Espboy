#pragma once

#include <Arduino.h>

constexpr uint8_t FONT_SIZE       = 7;
constexpr uint8_t FONT_FRAME_SIZE = FONT_SIZE * FONT_SIZE;

constexpr uint16_t FONT_WHITE[] PROGMEM = {

    // 0
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,

    // 1
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,

    // 2
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,

    // 3
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // 4
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,

    // 5
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // 6
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // 7
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,

    // 8
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000,
    0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // 9
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,

    // A
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,

    // B
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // C
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // D
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,

    // E
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,

    // F
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,

    // G
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,

    // H
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,

    // I
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,

    // J
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // K
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,

    // L
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,

    // M
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,

    // N
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,

    // O
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // P
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,

    // Q
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0xffff,

    // R
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,

    // S
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // T
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,

    // U
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,

    // V
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000,

    // W
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0x0000,
    0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000,

    // X
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,
    0xffff, 0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0xffff, 0xffff, 0xffff, 0x0000, 0xffff, 0xffff, 0xffff,
    0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff,

    // Y
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0xffff, 0xffff,
    0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0xffff, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000,

    // Z
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,

    // -
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,

    // :
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000

};

constexpr const uint16_t FONT_RED[] PROGMEM = {

    // 0
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,

    // 1
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,

    // 2
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,

    // 3
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // 4
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,

    // 5
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // 6
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // 7
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000,

    // 8
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // 9
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,

    // A
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,

    // B
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // C
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // D
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,

    // E
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,

    // F
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,

    // G
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,

    // H
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,

    // I
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,

    // J
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // K
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8,

    // L
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,

    // M
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x00f8, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,

    // N
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,

    // O
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // P
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,

    // Q
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x00f8,

    // R
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8,

    // S
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // T
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,

    // U
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,

    // V
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x0000, 0x0000, 0x0000,

    // W
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x00f8, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x0000,

    // X
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x0000, 0x00f8, 0x00f8, 0x00f8,
    0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8,

    // Y
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x00f8, 0x0000, 0x0000, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000,

    // Z
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000,
    0x0000, 0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,

    // -
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8, 0x00f8,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,

    // :
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00f8, 0x00f8, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000

};

/**
 * ----------------------------------------------------------------------------
 * Dino Game
 * ----------------------------------------------------------------------------
 * Copyright (c) 2022 St??phane Calderoni (https://github.com/m1cr0lab)
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