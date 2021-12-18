/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include <array>
#include <string>
#include "Node.h"

template <class T, int N>
Node<T, N>::Node(const T value): value_(value), num_of_child_(0) {}

template <class T, int N>
bool Node<T, N>::AddChild(Node<T, N>* n) {
        if (num_of_child_ >= N) {
                return false;
        } else {
                children_[num_of_child_] = n;
                num_of_child_+=1;
                return true;
        }
}

template <class T, int N>
const T Node<T, N>::value() const {
         return value_;
}

template <class T, int N>
const std::array<Node<T, N>*, N>& Node<T, N>::children() const {
          return children_;
}

template class Node<int, 2>;
template class Node<std::string, 3>;
