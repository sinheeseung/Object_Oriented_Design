/*
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_13WEEK_NODE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_13WEEK_NODE_H_

#include <array>

template <class T, int N>
class Node {
 public :
         explicit Node(const T value);
         bool AddChild(Node<T, N>* n);
         const T value() const;
         const std::array<Node<T, N>*, N>& children() const;

 private :
         const T value_;
         std::array<Node<T, N>*, N> children_;
         int num_of_child_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_13WEEK_NODE_H_
