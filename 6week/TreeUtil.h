/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_6WEEK_TREEUTIL_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_6WEEK_TREEUTIL_H_
#include "Node.h"
class TreeUtil {
 public:
         static TreeUtil* GetInstance();
         bool IsFullBinaryTree(const Node& n) const;
         bool IsCompleteBinaryTree(const Node& n) const;
         bool IsBinarySearchTree(const Node& n) const;

 private:
         TreeUtil();
         static TreeUtil* instance_;
};

#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_6WEEK_TREEUTIL_H_
