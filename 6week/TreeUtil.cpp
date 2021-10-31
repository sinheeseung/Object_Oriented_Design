/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "TreeUtil.h"
#include "Node.h"
#include <iostream>

TreeUtil* TreeUtil::instance_ = NULL;
TreeUtil::TreeUtil() {}
TreeUtil* TreeUtil::GetInstance() {
        if (instance_ == NULL) {
                instance_ = new TreeUtil();
        }
        return instance_;
}

bool TreeUtil::IsFullBinaryTree(const Node& n) const {
        Node current = n;
        bool isfull = true;
        if (current.left() == NULL && current.right() == NULL)
                return true;
        if (current.left() == NULL || current.right() == NULL)
                return false;
        isfull = isfull & IsFullBinaryTree(*current.left());
        isfull = isfull & IsFullBinaryTree(*current.right());
        return isfull;
}
// 왼쪽 노드가 null이고 오른쪽 노드가 null이 아닌 경우
// 둘 다 null이 아닌 경우
// 왼쪽 노드가 full이 아닌데 오른쪽 노드에 자식 노드가 있는 경우
// 왼쪽 노드가 full일 때 오른쪽 노드의 오른쪽 노드가 있는 경우
bool TreeUtil::IsCompleteBinaryTree(const Node& n) const {
        Node current = n;
        bool iscomplete = true;
        if (current.left() == NULL) {
                if (current.right() != NULL) {
                        return false;
                }
                return true;
        }
        if (current.left() != NULL && current.right() == NULL) {
                if (current.left()-> left() == NULL &&
                        current.left()-> right() != NULL) {
                        return false;
                }
                return true;
        }
        if (current.left() != NULL && current.right() != NULL) {
                bool istwochild;
                if (current.left()-> left() != NULL &&
                                current.left()->right() != NULL)
                                istwochild = true;
                if (!istwochild && (current.right() -> left() != NULL
                        || current.right()->right() != NULL)) {
                                iscomplete = false;
                }
                if (istwochild && current.right() -> left() == NULL
                        && current.right()->right() != NULL) {
                                iscomplete = false;
                }
                if (iscomplete) {
                        iscomplete = IsCompleteBinaryTree(*current.left());
                        iscomplete = iscomplete &
                                     IsCompleteBinaryTree(*current.right());
                }
        }
        return iscomplete;
}

bool TreeUtil::IsBinarySearchTree(const Node& n) const {
        Node current = n;
        bool isbinary = true;
        if (current.left() != NULL) {
                if (current.left()->value() >= current.value())
                        return false;
                isbinary = isbinary & IsBinarySearchTree(*current.left());
        }
        if (current.right() != NULL) {
                if (current.right()->value() <= current.value())
                        return false;
                isbinary = isbinary & IsBinarySearchTree(*current.right());
        }
        return isbinary;
}
