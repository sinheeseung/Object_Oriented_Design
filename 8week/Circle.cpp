/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "Circle.h"

Circle::Circle(int radius): radius_(radius) {}

int Circle::radius() const {
        return radius_;
}

Circle Circle::operator+(const Circle& circle) const {
        return Circle(radius_ + circle.radius());
}
