/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include "gtest/gtest.h"
#include "/mnt/c/Users/shs72/desktop/Object_Oriented_Design/3week/palindrome.h"

TEST(TestPalindrome, Test1) {
        EXPECT_EQ(countPalindrome(1, 55), 14);
}

TEST(TestPalindrome, Test2) {
        EXPECT_EQ(countPalindrome(1, 100), 18);
}

TEST(TestPalindrome, Test3) {
        EXPECT_EQ(countPalindrome(1, 250), 33);
}

TEST(TestPalindrome, Test4) {
        EXPECT_EQ(countPalindrome(10, 11), 1);
}

TEST(TestPalindrome, Test5) {
        EXPECT_EQ(countPalindrome(50, 88), 4);
}

TEST(TestPalindrome, Test6) {
        EXPECT_EQ(countPalindrome(55, 132), 9);
}

TEST(TestPalindrome, Test7) {
        EXPECT_EQ(countPalindrome(98, 121), 4);
}

TEST(TestPalindrome, Test8) {
        EXPECT_EQ(countPalindrome(100, 200), 10);
}

TEST(TestPalindrome, Test9) {
        EXPECT_EQ(countPalindrome(150, 232), 9);
}

TEST(TestPalindrome, Test10) {
        EXPECT_EQ(countPalindrome(200, 300), 10);
}
