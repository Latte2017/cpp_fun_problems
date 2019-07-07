//965


//  Definition for a binary tree node.
#include <cstddef>
#include<iostream>

using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
private: int val;
public:
	bool isUnivalTree(TreeNode* root) {
		val = root->val;
		bool ret_val = evalTree(root);
		return ret_val;
	}
private:
	bool evalTree(TreeNode* root) {
		bool lval = true, rval = true;
		if (root->val != val)
			return false;
		if (root->left != nullptr)
			lval = evalTree(root->left);
		if (root->right != nullptr)
			rval = evalTree(root->right);
		if (lval == true and rval == true)
			return true;
		else
			return false;
	}
};

int main() {
	Solution sol1;
	TreeNode myval1(4), myval2(1), myval3(2);
	myval1.left = &myval2;
	myval1.right = &myval3;
	bool ret_val = sol1.isUnivalTree(&myval1);
	cout << "ret_val is " << ret_val << endl;
	return 0;
}