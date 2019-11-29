/*
Given a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus sum of all keys greater than the original key in BST.

Example:

Input: The root of a Binary Search Tree like this:
			  5
			/   \
		   2     13
*/

#include<iostream>
#include <stack>

using namespace std;

class Node {
public:
	int val = 0;
	Node* left = NULL;
	Node* right = NULL;
	Node(int x) {
		val = x;
	}
};

class binaryTree {
private:
	int sum = 0;
	
public:
	void greater_helper(Node* root) {
		if (root == nullptr) {
			return;
		}
		if (root->right) {
			greater_helper(root->right);
		}
		sum += root->val;
		root->val = sum;
		if (root->left) {
			greater_helper(root->left);
		}
	}
	Node* Greater(Node* root) {
		greater_helper(root);
		return root;
	}
};

int main() {
	Node* root = new Node(10);
	Node* left = new Node(5);
	Node* right = new Node(15);
	Node* right_left = new Node(12);
	Node* right_right = new Node(25);
	root->left = left;
	root->right = right;
	root->right->right = right_right;
	root->right->left = right_left;
	binaryTree b1;
	b1.Greater(root);
	cout << root->left->val << endl;
}
