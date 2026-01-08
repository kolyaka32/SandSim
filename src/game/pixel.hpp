/*
 * Copyright (C) 2024-2025, Kazankov Nikolay
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "../data/app.hpp"
#include "pixelType.hpp"


// Single object for interact with
class Pixel {
 public:
    PixelType type = PixelType::None;  // Current state of pixel
    float ux = 0.0, uy = 0.0;          // Current 

 public:
    
};
