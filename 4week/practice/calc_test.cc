#include "gtest/gtest.h"
#include "calc.h"

TEST(TestCalc, AddPosPosTest){
	EXPECT_EQ(calc('+', 1, 2), 3);
}

TEST(TestCalc, AddPosPosTest){
        EXPECT_EQ(calc('+', -1, 2), 1);
}

TEST(TestCalc, AddPosPosTest){
        EXPECT_EQ(calc('+', -1, -2), -3);
}

TEST(TestCalc, AddPosPosTest){
        EXPECT_EQ(calc('-', 1, 2), -1);
}
