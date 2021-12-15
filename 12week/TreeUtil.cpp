/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "TreeUtil.h"
#include "IntNode.h"
#include "StringNode.h"
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>

TreeUtil* TreeUtil::instance_ = NULL;
TreeUtil::TreeUtil() {}
TreeUtil* TreeUtil::GetInstance() {
        if (instance_ == NULL) {
                instance_ = new TreeUtil();
        }
        return instance_;
}

const std::vector<const Node*> TreeUtil::
                     DepthFirstSearch(const Node* node) const {
        std::vector<const Node*> vec;
        std::stack<const Node*> st;

        st.push(node);
        while (!st.empty()) {
                const Node* current = st.top();
                vec.push_back(current);
                st.pop();
                if (current-> right() != NULL) {
                        st.push(current->right());
                }
                if (current-> left() != NULL) {
                        st.push(current->left());
                }
        }
        return vec;
}
const std::vector<const Node*> TreeUtil::
                      BreadthFirstSearch(const Node* node) const {
        std::vector<const Node*> vec;
        std::queue<const Node*> q;

        q.push(node);
        vec.push_back(node);
        while (!q.empty()) {
                const Node* current = q.front();

                if (current-> left() != NULL) {
                        q.push(current->left());
                        vec.push_back(current->left());
                }
                if (current-> right() != NULL) {
                        q.push(current->right());
                        vec.push_back(current->right());
                }
                q.pop();
        }
        return vec;
}
