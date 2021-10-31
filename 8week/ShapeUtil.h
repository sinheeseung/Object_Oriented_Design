/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_SHAPEUTIL_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_SHAPEUTIL_H_
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
class ShapeUtil{
 public:
        static ShapeUtil* GetInstance();
        float CalcArea(const Circle& circle);
        float CalcArea(const Triangle& triangle);
        int CalcArea(const Rectangle& rect);
 private:
        ShapeUtil();
        static ShapeUtil* instance_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_SHAPEUTIL_H_
