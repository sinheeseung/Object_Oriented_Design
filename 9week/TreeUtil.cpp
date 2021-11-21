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

const std::string TreeUtil::ToString(const Node* node) const {
        std::string result;
        if (dynamic_cast<const IntNode*>(node) != nullptr) {
                result = "IntNode(" +
                   std::to_string(dynamic_cast<const IntNode*>(node)->value());
        }
       if (dynamic_cast<const StringNode*>(node) != nullptr) {
                result = "StringNode(" +
                         dynamic_cast<const StringNode*>(node)->value();
        }
        result += ", ";
        if (node->left() == NULL) {
                result += "NULL";
        } else {
                result += TreeUtil::ToString(node->left());
        }
        result += ", ";
        if (node->right() == NULL) {
                result += "NULL";
        } else {
                result += TreeUtil::ToString(node->right());
        }
        return result + ")";
}

const std::string TreeUtil::PreOrderTraversal(const Node* node) const {
        std::string result = "";
        const Node* left_ = node->left();
        const Node* right_ = node->right();

        if (dynamic_cast<const IntNode*>(node) != nullptr) {
                result += std::to_string(
                          dynamic_cast<const IntNode*>(node)->value()) + " ";
        }
        if (dynamic_cast<const StringNode*>(node) != nullptr)
                result += dynamic_cast<const StringNode*>(node)->value() +" ";
        if (left_ != NULL)
                result += TreeUtil::PreOrderTraversal(node->left());

        if (right_ != NULL)
                result += TreeUtil::PreOrderTraversal(node->right());
        return result;
}

const std::string TreeUtil::InOrderTraversal(const Node* node) const {
        std::string result = "";
        const Node* left_ = node->left();
        const Node* right_ = node->right();
        if (left_ != NULL)
                result += TreeUtil::InOrderTraversal(node->left());
        if (dynamic_cast<const IntNode*>(node) != nullptr)
                result += std::to_string
                          (dynamic_cast<const IntNode*>(node)->value()) +" ";
        if (dynamic_cast<const StringNode*>(node) != nullptr)
                result += dynamic_cast<const StringNode*>(node)->value() + " ";
        if (right_ != NULL)
                result += TreeUtil::InOrderTraversal(node->right());
        return result;
}

const std::string TreeUtil::PostOrderTraversal(const Node* node) const {
        std::string result = "";
        const Node* left_ = node->left();
        const Node* right_ = node->right();

        if (left_ != NULL)
                result += TreeUtil::PostOrderTraversal(node->left());

        if (right_ != NULL)
                result += TreeUtil::PostOrderTraversal(node->right());

        if (dynamic_cast<const IntNode*>(node) != nullptr)
                result += std::to_string(
                         dynamic_cast<const IntNode*>(node)->value()) + " ";

        if (dynamic_cast<const StringNode*>(node) != nullptr)
                result += dynamic_cast<const StringNode*>(node)->value() + " ";
        return result;
}
