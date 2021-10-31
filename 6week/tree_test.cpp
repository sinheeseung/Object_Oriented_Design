/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include "gtest/gtest.h"
#include "Node.h"
#include "TreeUtil.h"

TEST(TestTree, Test1) {
        Node n1(1, NULL, NULL);
        Node n3(6, NULL, NULL);
        Node n4(9, NULL, NULL);
        Node n5(2, &n1, NULL);
        Node n6(8, &n3, &n4);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsFullBinaryTree(root), false);
}
TEST(TestTree, Test2) {
        Node n1(1, NULL, NULL);
        Node n3(6, NULL, NULL);
        Node n4(9, NULL, NULL);
        Node n5(2, &n1, NULL);
        Node n6(8, &n3, &n4);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsCompleteBinaryTree(root), false);
}
TEST(TestTree, Test3) {
        Node n1(1, NULL, NULL);
        Node n3(6, NULL, NULL);
        Node n4(9, NULL, NULL);
        Node n5(2, &n1, NULL);
        Node n6(8, &n3, &n4);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsBinarySearchTree(root), true);
}
TEST(TestTree, Test4) {
        Node n1(1, NULL, NULL);
        Node n2(3, NULL, NULL);
        Node n3(6, NULL, NULL);
        Node n5(2, &n1, &n2);
        Node n6(8, &n3, NULL);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsFullBinaryTree(root), false);
}
TEST(TestTree, Test5) {
        Node n1(1, NULL, NULL);
        Node n2(3, NULL, NULL);
        Node n3(6, NULL, NULL);
        Node n5(2, &n1, &n2);
        Node n6(8, &n3, NULL);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsCompleteBinaryTree(root), true);
}
TEST(TestTree, Test6) {
        Node n1(1, NULL, NULL);
        Node n2(3, NULL, NULL);
        Node n3(6, NULL, NULL);
        Node n5(2, &n1, &n2);
        Node n6(8, &n3, NULL);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsBinarySearchTree(root), true);
}
TEST(TestTree, Test7) {
        Node n1(1, NULL, NULL);
        Node n2(3, NULL, NULL);
        Node n3(10, NULL, NULL);
        Node n4(9, NULL, NULL);
        Node n5(2, &n1, &n2);
        Node n6(8, &n3, &n4);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsFullBinaryTree(root), true);
}
TEST(TestTree, Test8) {
        Node n1(1, NULL, NULL);
        Node n2(3, NULL, NULL);
        Node n3(10, NULL, NULL);
        Node n4(9, NULL, NULL);
        Node n5(2, &n1, &n2);
        Node n6(8, &n3, &n4);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsCompleteBinaryTree(root), true);
}
TEST(TestTree, Test9) {
        Node n1(1, NULL, NULL);
        Node n2(3, NULL, NULL);
        Node n3(10, NULL, NULL);
        Node n4(9, NULL, NULL);
        Node n5(2, &n1, &n2);
        Node n6(8, &n3, &n4);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsBinarySearchTree(root), false);
}
TEST(TestTree, Test10) {
        Node n0(0, NULL, NULL);
        Node n1(1, &n0, NULL);
        Node n2(3, NULL, NULL);
        Node n3(6, NULL, NULL);
        Node n4(9, NULL, NULL);
        Node n5(2, &n1, &n2);
        Node n6(8, &n3, &n4);
        Node root(5, &n5, &n6);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        EXPECT_EQ(tree_util->IsCompleteBinaryTree(root), true);
}
