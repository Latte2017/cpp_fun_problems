//617

#include<iostream>

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
	struct TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
		if (t1 != NULL && t2 != NULL) {
			t1->val += t2->val;
			t1->left = mergeTrees(t1->left, t2 ->left);
			t1->right = mergeTrees(t1->right, t2->right);
			return t1;
		}
		if (t2==NULL) {
			return t1;
		}
		if (t1==NULL) {
			return t2;
		}
		return t1;
	}
};

int main() {
	TreeNode root1(3), left1(1), right1(2), left_left(5), left_right(12),right_right(13), root2(10), left2(3), right2(10);
	root1.left = &left1;
	root1.right = &right1;
	root1.left->left = &left_left;
	root1.left->right = &left_right;
	root2.left = &left2;
	root2.right = &right2;
	root2.right->right = &right_right;
	Solution sol1;
	TreeNode *retVal = sol1.mergeTrees(&root1, &root2);
	cout << "Retval is  " << retVal->right->right->val << endl;

}