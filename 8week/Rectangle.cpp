/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "Rectangle.h"

Rectangle::Rectangle(int height, int width): height_(height), width_(width) {}

int Rectangle::height() const {
        return height_;
}

int Rectangle::width() const {
        return width_;
}

Rectangle Rectangle::operator+(const Rectangle& rect) const {
        return Rectangle(height_ + rect.height(), width_ + rect.width());
}
