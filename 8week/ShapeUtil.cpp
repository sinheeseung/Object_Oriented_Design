/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "ShapeUtil.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>

ShapeUtil* ShapeUtil::instance_ = NULL;
ShapeUtil::ShapeUtil() {}
ShapeUtil* ShapeUtil::GetInstance() {
       if (instance_ == NULL) {
                instance_ = new ShapeUtil();
        }
        return instance_;
}

float ShapeUtil::CalcArea(const Circle& circle) {
       return circle.radius() * circle.radius() * 3.14;
}

float ShapeUtil::CalcArea(const Triangle& triangle) {
       return static_cast<float>(triangle.height()) * triangle.base() / 2;
}

int ShapeUtil::CalcArea(const Rectangle& rect) {
       return rect.height() * rect.width();
}
