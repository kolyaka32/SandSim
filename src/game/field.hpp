/*
 * Copyright (C) 2024-2025, Kazankov Nikolay
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

#include "pixel.hpp"


class Field {
private:
    const Window& window;
    static const int width = 20, height = 20;
    const Pixel grid[height][width];
    const Pixel temp[height][width];
    float size = 20.0;
    bool clicking = false;

public:
    Field(const Window& window);
    ~Field();
    SDL_Point getRelativePos();
    bool isValid(SDL_Point point);
    void click();
    void wheelScroll(float wheel);
    void reset();
    void update();
    void blit() const;
};
