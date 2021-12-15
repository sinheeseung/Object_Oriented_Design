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

        std::vector<const Node*> dfs_result =
                    tree_util -> DepthFirstSearch(&root);

        std::string ret = "#DFS result:\n";
        for (const Node* n : dfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#DFS result:\n0\nSeung\n3\nHee\n";
        EXPECT_EQ(ret, re);
}

TEST(TestTree, Test2) {
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(nullptr, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::vector<const Node*> bfs_result =
                    tree_util -> BreadthFirstSearch(&root);

        std::string ret = "#BFS result:\n";
        for (const Node* n : bfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#BFS result:\n0\nSeung\n3\nHee\n";
        EXPECT_EQ(ret, re);
}
TEST(TestTree, Test3) {
        StringNode sn1(nullptr, nullptr, "Shin");
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(&sn1, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::vector<const Node*> dfs_result =
                    tree_util -> DepthFirstSearch(&root);

        std::string ret = "#DFS result:\n";
        for (const Node* n : dfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#DFS result:\n0\nSeung\nShin\n3\nHee\n";
        EXPECT_EQ(ret, re);
}
TEST(TestTree, Test4) {
        StringNode sn1(nullptr, nullptr, "Shin");
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(&sn1, nullptr, "Seung");
        IntNode in1(nullptr, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::vector<const Node*> bfs_result =
                    tree_util -> BreadthFirstSearch(&root);

        std::string ret = "#BFS result:\n";
        for (const Node* n : bfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#BFS result:\n0\nSeung\n3\nShin\nHee\n";
        EXPECT_EQ(ret, re);
}

TEST(TestTree, Test5) {
        StringNode sn1(nullptr, nullptr, "Shin");
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(&sn1, nullptr, "Seung");
        IntNode in2(nullptr, nullptr, 5);
        IntNode in1(&in2, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::vector<const Node*> dfs_result =
                    tree_util -> DepthFirstSearch(&root);

        std::string ret = "#DFS result:\n";
        for (const Node* n : dfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#DFS result:\n0\nSeung\nShin\n3\n5\nHee\n";
        EXPECT_EQ(ret, re);
}
TEST(TestTree, Test6) {
        StringNode sn1(nullptr, nullptr, "Shin");
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn3(&sn1, nullptr, "Seung");
        IntNode in2(nullptr, nullptr, 5);
        IntNode in1(&in2, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::vector<const Node*> bfs_result =
                    tree_util -> BreadthFirstSearch(&root);

        std::string ret = "#BFS result:\n";
        for (const Node* n : bfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#BFS result:\n0\nSeung\n3\nShin\n5\nHee\n";
        EXPECT_EQ(ret, re);
}

TEST(TestTree, Test7) {
        StringNode sn1(nullptr, nullptr, "Shin");
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn4(nullptr, nullptr, "HI");
        StringNode sn3(&sn1, &sn4, "Seung");
        IntNode in2(nullptr, nullptr, 5);
        IntNode in1(&in2, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::vector<const Node*> dfs_result =
                    tree_util -> DepthFirstSearch(&root);

        std::string ret = "#DFS result:\n";
        for (const Node* n : dfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#DFS result:\n0\nSeung\nShin\nHI\n3\n5\nHee\n";
        EXPECT_EQ(ret, re);
}
TEST(TestTree, Test8) {
        StringNode sn1(nullptr, nullptr, "Shin");
        StringNode sn2(nullptr, nullptr, "Hee");
        StringNode sn4(nullptr, nullptr, "HI");
        StringNode sn3(&sn1, &sn4, "Seung");
        IntNode in2(nullptr, nullptr, 5);
        IntNode in1(&in2, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::vector<const Node*> bfs_result =
                    tree_util -> BreadthFirstSearch(&root);

        std::string ret = "#BFS result:\n";
        for (const Node* n : bfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#BFS result:\n0\nSeung\n3\nShin\nHI\n5\nHee\n";
        EXPECT_EQ(ret, re);
}

TEST(TestTree, Test9) {
        StringNode sn1(nullptr, nullptr, "Shin");
        StringNode sn2(nullptr, nullptr, "Hee");
        IntNode in3(nullptr, nullptr, 10);
        StringNode sn4(nullptr, &in3, "HI");
        StringNode sn3(&sn1, &sn4, "Seung");
        IntNode in2(nullptr, nullptr, 5);
        IntNode in1(&in2, &sn2, 3);
        IntNode root(&sn3, &in1, 0);


        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::vector<const Node*> dfs_result =
                    tree_util -> DepthFirstSearch(&root);

        std::string ret = "#DFS result:\n";
        for (const Node* n : dfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#DFS result:\n0\nSeung\nShin\nHI\n10\n3\n5\nHee\n";
        EXPECT_EQ(ret, re);
}

TEST(TestTree, Test10) {
        StringNode sn1(nullptr, nullptr, "Shin");
        StringNode sn2(nullptr, nullptr, "Hee");
        IntNode in3(nullptr, nullptr, 10);
        StringNode sn4(nullptr, &in3, "HI");
        StringNode sn3(&sn1, &sn4, "Seung");
        IntNode in2(nullptr, nullptr, 5);
        IntNode in1(&in2, &sn2, 3);
        IntNode root(&sn3, &in1, 0);

        TreeUtil* tree_util = TreeUtil::GetInstance();

        std::vector<const Node*> bfs_result =
                    tree_util -> BreadthFirstSearch(&root);

        std::string ret = "#BFS result:\n";
        for (const Node* n : bfs_result) {
                 ret +=  n->value()+"\n";
        }
        std::string re = "#BFS result:\n0\nSeung\n3\nShin\nHI\n5\nHee\n10\n";
        EXPECT_EQ(ret, re);
}
