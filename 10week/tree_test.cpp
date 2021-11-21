/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include "gtest/gtest.h"
#include "Node.h"
#include "StringNode.h"
#include "IntNode.h"
#include "TreeUtil.h"

TEST(TestTree, Test1) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "IntNode(0, StringNode(Seung, NULL, NULL)";
        re += ", IntNode(3, NULL, StringNode(Hee, NULL, NULL)))";
        EXPECT_EQ(root.ToString(), re);
}

TEST(TestTree, Test2) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "0, Seung, 3, Hee";
        EXPECT_EQ(tree_util -> PreOrderTraversal(&root), re);
}
TEST(TestTree, Test3) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "Seung, 0, 3, Hee";
        EXPECT_EQ(tree_util -> InOrderTraversal(&root), re);
}
TEST(TestTree, Test4) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "Seung, Hee, 3, 0";
        EXPECT_EQ(tree_util -> PostOrderTraversal(&root), re);
}

TEST(TestTree, Test5) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 5);
        IntNode in2(&sn3, nullptr, 10);
        IntNode root(&in1, &in2, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "IntNode(0, IntNode(5, NULL, ";
        re += "StringNode(Hee, NULL, NULL))";
        re += ", IntNode(10, StringNode(Seung, NULL, NULL), NULL))";
        EXPECT_EQ(root.ToString(), re);
}

TEST(TestTree, Test6) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 5);
        IntNode in2(&sn3, nullptr, 10);
        IntNode root(&in1, &in2, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "0, 5, Hee, 10, Seung";
        EXPECT_EQ(tree_util -> PreOrderTraversal(&root), re);
}

TEST(TestTree, Test7) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 5);
        IntNode in2(&sn3, nullptr, 10);
        IntNode root(&in1, &in2, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "5, Hee, 0, Seung, 10";
        EXPECT_EQ(tree_util -> InOrderTraversal(&root), re);
}

TEST(TestTree, Test8) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 5);
        IntNode in2(&sn3, nullptr, 10);
        IntNode root(&in1, &in2, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "Hee, 5, Seung, 10, 0";
        EXPECT_EQ(tree_util -> PostOrderTraversal(&root), re);
}

TEST(TestTree, Test9) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        StringNode sn1(&sn2, &sn3, "Shin");
        IntNode in1(nullptr, nullptr, 10);
        IntNode root(&in1, &sn1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "0, 10, Shin, Hee, Seung";
        EXPECT_EQ(tree_util -> PreOrderTraversal(&root), re);
}

TEST(TestTree, Test10) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        StringNode sn1(&sn2, &sn3, "Shin");
        IntNode in1(nullptr, nullptr, 10);
        IntNode root(&in1, &sn1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::string re = "10, 0, Hee, Shin, Seung";
        EXPECT_EQ(tree_util -> InOrderTraversal(&root), re);
}
