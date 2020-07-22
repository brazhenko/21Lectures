//
// Created by Lommy Reznak on 7/17/20.
//

#include "tree.h"

// Given a binary tree,
// imagine yourself standing
// on the right side of it,
// return the values of the
// nodes you can see ordered
// from top to bottom.

// Input:
//
//    1            <---
//  /    \
//  2     3         <---
//  \      \
//   5       4       <---

// Ouput:
// [1, 3, 4]

vector<int> rightSideView(TreeNode* root)
{
	return {1, 2};
}

#include "test1.h"
// g++ --std=c++17 tree1.cpp -o t1 && ./t1