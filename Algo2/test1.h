//
// Created by Lommy Reznak on 7/17/20.
//

#include "tree.h"

static vector<int> rightSideViewMy(TreeNode* root) {
	vector<int> ret;
	if (!root) return ret;

	vector<TreeNode*> v = {root};
	vector<int> d = {0};

	TreeNode *lst = root;
	int dps = 0;

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i]->left)
		{
			v.push_back(v[i]->left);
			d.push_back(d[i]+1);

		}

		if (v[i]->right)
		{
			v.push_back(v[i]->right);
			d.push_back(d[i]+1);
		}

		if (d[i] > dps)
		{
			ret.push_back(lst->val);
			dps = d[i];
		}

		lst=v[i];
	}
	ret.push_back(lst->val);

	return ret;
}

int main()
{
//	using namespace std;
//	clock_t begin = clock();
//
//	code_to_time();
//
//	clock_t end = clock();
//	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	// Test1
	auto arr = new TreeNode[100];
	arr[0].val = 10;
	assert(rightSideViewMy(&arr[0]) == rightSideView(&arr[0]));

	cout << "test ok";
}