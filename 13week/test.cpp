/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include "gtest/gtest.h"
#include "Node.h"

template <class T, int N>
std::string PrintChildren(const Node<T, N>& n) {
        std::string re = "";
        for (Node<T, N>* child : n.children()) {
                re = re + std::to_string(child->value()) + " ";
        }
        return re;
}

TEST(TestNode, Test1) {
        Node<int, 2> n1(1);
        Node<int, 2> n2(2);
        Node<int, 2> n3(3);
        Node<int, 2> n4(4);

        EXPECT_EQ(1, n1.AddChild(&n2));
}
TEST(TestNode, Test2) {
        Node<int, 2> n1(1);
        Node<int, 2> n2(2);
        Node<int, 2> n3(3);
        Node<int, 2> n4(4);

        n1.AddChild(&n2);
        n1.AddChild(&n3);

        EXPECT_EQ(0, n1.AddChild(&n4));
}
TEST(TestNode, Test3) {
        Node<std::string, 3> s1("Shin");
        Node<std::string, 3> s2("Hee");
        Node<std::string, 3> s3("Seung");

        EXPECT_EQ(1, s1.AddChild(&s1));
}
TEST(TestNode, Test4) {
        Node<std::string, 3> s1("Shin");
        Node<std::string, 3> s2("Hee");
        Node<std::string, 3> s3("Seung");
        Node<std::string, 3> s4("Hi");
        Node<std::string, 3> s5("Hello");

        s1.AddChild(&s2);
        s1.AddChild(&s3);
        s1.AddChild(&s4);

        EXPECT_EQ(0, s1.AddChild(&s5));
}
TEST(TestNode, Test5) {
        Node<int, 2> n1(1);

        EXPECT_EQ(1, n1.value());
}
TEST(TestNode, Test6) {
        Node<std::string, 3> s1("Shin");

        EXPECT_EQ("Shin", s1.value());
}
TEST(TestNode, Test7) {
        Node<int, 2> n1(1);
        Node<int, 2> n2(2);
        Node<int, 2> n3(3);
        Node<int, 2> n4(4);

        n1.AddChild(&n2);
        n1.AddChild(&n3);

        std::string re = PrintChildren<int, 2>(n1);

        EXPECT_EQ("2 3 ", re);
}

TEST(TestNode, Test8) {
        Node<int, 2> n1(5);
        Node<int, 2> n2(6);
        Node<int, 2> n3(7);
        Node<int, 2> n4(8);

        n2.AddChild(&n1);
        n2.AddChild(&n3);

        std::string re = PrintChildren<int, 2>(n2);

        EXPECT_EQ("5 7 ", re);
}
TEST(TestNode, Test9) {
        Node<int, 2> n1(1);
        Node<int, 2> n2(2);
        Node<int, 2> n3(3);
        Node<int, 2> n4(4);

        n3.AddChild(&n2);
        n3.AddChild(&n1);

        std::string re = PrintChildren<int, 2>(n3);

        EXPECT_EQ("2 1 ", re);
}

TEST(TestNode, Test10) {
        Node<int, 2> n1(5);
        Node<int, 2> n2(6);
        Node<int, 2> n3(7);
        Node<int, 2> n4(8);

        n4.AddChild(&n1);
        n4.AddChild(&n3);

        std::string re = PrintChildren<int, 2>(n4);

        EXPECT_EQ("5 7 ", re);
}

