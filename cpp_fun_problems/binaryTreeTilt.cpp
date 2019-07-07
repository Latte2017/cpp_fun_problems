//563

#include<iostream>
#include<string>

using namespace std;


 //Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 

class Solution {
public: int rootTilt = 0;
public:
	int findTilt(TreeNode* root) {
		dfs(root);
		return rootTilt;
	}
private:
	int dfs(TreeNode* root){
		
		if (root == nullptr)
			return 0;
		int lftTilt = dfs(root->left);
		int rghtTilt = dfs(root->right);
		rootTilt = abs(lftTilt - rghtTilt) + rootTilt;
		return (lftTilt + rghtTilt + root->val);
	}
};

int main() {
	Solution mysol1;
	struct TreeNode root = NULL, left = NULL, right = NULL, left_left = NULL, left_right=NULL;
	root.val = 1;
	left.val = 2;
	right.val = 3;
	left_left.val = 4;
	left_right.val = 5;
	root.left = &left;
	root.right = &right;
	left.left = &left_left;
	left.right = &left_right;
	int ret_val = mysol1.findTilt(&root);
	cout << "Ret_val is " << ret_val << endl;
	
}