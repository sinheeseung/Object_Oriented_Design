/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include "gtest/gtest.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "ShapeUtil.h"

TEST(TESTCALC, Calc1) {
       Circle c(10);
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(c), 314);
}
TEST(TESTCALC, Calc2) {
       Triangle t(10, 10);
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(t), 50);
}
TEST(TESTCALC, Calc3) {
       Rectangle r(10, 10);
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(r), 100);
}
TEST(TESTCALC, Calc4) {
       Circle c1(5);
       Circle c2(5);
       Circle c3 = c1 + c2;
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(c3), 314);
}
TEST(TESTCALC, Calc5) {
       Triangle t1(5, 5);
       Triangle t2(5, 5);
       Triangle t3 = t1 + t2;
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(t3), 50);
}
TEST(TESTCALC, Calc6) {
       Rectangle r1(5, 5);
       Rectangle r2(5, 5);
       Rectangle r3 = r1 + r2;
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(r3), 100);
}
TEST(TESTCALC, Calc7) {
       Circle c1(7);
       Circle c2(5);
       Circle c3 = c1 + c2;
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(c3), 452.16f);
}
TEST(TESTCALC, Calc8) {
       Triangle t1(2, 7);
       Triangle t2(3, 2);
       Triangle t3 = t1 + t2;
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(t3), 22.5f);
}
TEST(TESTCALC, Calc9) {
       Rectangle r1(3, 6);
       Rectangle r2(5, 8);
       Rectangle r3 = r1 + r2;
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(r3), 112);
}
TEST(TESTCALC, Calc10) {
       Circle c1(3);
       Circle c2(4);
       Circle c3 = c1 + c2;
       ShapeUtil* util = ShapeUtil::GetInstance();
       EXPECT_EQ(util->CalcArea(c3), 153.86f);
}
