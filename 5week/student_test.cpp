/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include "gtest/gtest.h"
#include "Student.h"
#include "Swclass.h"

TEST(TestStudent, Test1) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        EXPECT_EQ(student1.getStudentId(), 201702033);
}
TEST(TestStudent, Test2) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        EXPECT_EQ(student1.getName(), "heeseung");
}
TEST(TestStudent, Test3) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        EXPECT_EQ(student1.getScoreHw(), 70);
}
TEST(TestStudent, Test4) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        EXPECT_EQ(student1.getScoreMidterm(), 80);
}
TEST(TestStudent, Test5) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        EXPECT_EQ(student1.getScoreTermProject(), 90);
}
TEST(TestStudent, Test6) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        EXPECT_EQ(student1.getScoreFinaltest(), 100);
}
TEST(TestStudent, Test7) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        EXPECT_EQ(student1.getInfo(), "학번: 201702033, 이름: heeseung");
}
TEST(TestStudent, Test8) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        student1.setName("희승");
        student1.setStudentId(12345);
        EXPECT_EQ(student1.getInfo(), "학번: 12345, 이름: 희승");
}
TEST(TestStudent, Test9) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        Swclass swclass(student1, 40172, 00, "OOD", 30, 20, 30, 20);
        EXPECT_EQ(swclass.getInfo(), "201702033 B");
}
TEST(TestStudent, Test10) {
        Student student1(201702033, "heeseung", 70, 80, 90, 100);
        student1.setStudentId(12345);
        student1.setScoreHw(100);
        Swclass swclass(student1, 40172, 00, "OOD", 30, 20, 30, 20);
        EXPECT_EQ(swclass.getInfo(), "12345 A");
}
