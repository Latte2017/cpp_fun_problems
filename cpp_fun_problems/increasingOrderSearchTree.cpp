//897

#include<iostream>
#include<vector>

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* increasingBST(TreeNode* root) {
		TreeNode root(0);
		vector<TreeNode*> vt;
		while (root->left) {
			vt.push_back(root);
			root = root->left;
		}
		if()
	}
};