/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_12WEEK_TREEUTIL_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_12WEEK_TREEUTIL_H_
#include <string>
#include <vector>
#include "Node.h"
class TreeUtil {
 public:
         static TreeUtil* GetInstance();
         const std::vector<const Node*>
                   DepthFirstSearch(const Node* node) const;
         const std::vector<const Node*>
                   BreadthFirstSearch(const Node* node) const;
 private:
         TreeUtil();
         static TreeUtil* instance_;
};

#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_12WEEK_TREEUTIL_H_
