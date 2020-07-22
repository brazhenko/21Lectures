#pragma once

#include <random>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <ctime>
#include <iostream>
#include <stack>
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

// Tree node definition.

struct TreeNode
{
	TreeNode()
	: val(0), left(nullptr), right(nullptr)
	{}

	TreeNode(int x)
	: val(x), left(nullptr), right(nullptr)
	{}

	TreeNode(int x, TreeNode *left, TreeNode *right)
	: val(x), left(left), right(right)
	{}

	int val;
	TreeNode *left;
	TreeNode *right;
};
