/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "TreeUtil.h"
#include "IntNode.h"
#include "StringNode.h"
#include <string>
#include <iostream>

TreeUtil* TreeUtil::instance_ = NULL;
TreeUtil::TreeUtil() {}
TreeUtil* TreeUtil::GetInstance() {
        if (instance_ == NULL) {
                instance_ = new TreeUtil();
        }
        return instance_;
}

const std::string TreeUtil::PreOrderTraversal(const Node* node) const {
        std::string result = "";
        const Node* left_ = node->left();
        const Node* right_ = node->right();

        result += node -> value();
        if (left_ != NULL)
                result += ", " + TreeUtil::PreOrderTraversal(node->left());

        if (right_ != NULL)
                result += ", " + TreeUtil::PreOrderTraversal(node->right());
        return result;
}

const std::string TreeUtil::InOrderTraversal(const Node* node) const {
        std::string result = "";
        const Node* left_ = node->left();
        const Node* right_ = node->right();
        if (left_ != NULL)
                result += TreeUtil::InOrderTraversal(node->left()) + ", ";
        result += node -> value();
        if (right_ != NULL)
                result += ", " + TreeUtil::InOrderTraversal(node->right());
        return result;
}

const std::string TreeUtil::PostOrderTraversal(const Node* node) const {
        std::string result = "";
        const Node* left_ = node->left();
        const Node* right_ = node->right();

        if (left_ != NULL)
                result += TreeUtil::PostOrderTraversal(node->left()) + ", ";

        if (right_ != NULL)
                result += TreeUtil::PostOrderTraversal(node->right()) + ", ";

        result += node -> value();
        return result;
}
