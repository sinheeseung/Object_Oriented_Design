/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "ShapeUtil.h"

int main() {
        ShapeUtil* util = ShapeUtil::GetInstance();
        Circle c1(3);
        Circle c2(5);
        Circle c3 = c1 + c2;
        std::cout << "Circle1: " << util->CalcArea(c1) << std::endl;
        std::cout << "Circle2: " << util->CalcArea(c2) << std::endl;
        std::cout << "Circle3: " << util->CalcArea(c3) << std::endl;

        Triangle t1(3, 7);
        Triangle t2(4, 2);
        Triangle t3 = t1 + t2;
        std::cout << "#Triangle1: " << util->CalcArea(t1) << std::endl;
        std::cout << "#Triangle2: " << util->CalcArea(t2) << std::endl;
        std::cout << "#Triangle3: " << util->CalcArea(t3) << std::endl;

        Rectangle r1(3, 7);
        Rectangle r2(4, 2);
        Rectangle r3 = r1 + r2;
        std::cout << "#Rectangle1: " << util->CalcArea(r1) << std::endl;
        std::cout << "#Rectangle2: " << util->CalcArea(r2) << std::endl;
        std::cout << "#Rectangle3: " << util->CalcArea(r3) << std::endl;
        return 0;
}
