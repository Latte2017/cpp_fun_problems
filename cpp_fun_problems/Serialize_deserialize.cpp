/*
Given the root to a binary tree, implement serialize(root), 
which serializes the tree into a string, and deserialize(s), 
which deserializes the string back into the tree.
*/

#include<string>
#include<iostream>

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

class Serialize_deserialize {
public:
	string serialize(Node* root) {
		string ret_str = "";
		ret_str = preorder(root, ret_str);
		return ret_str;
	}

	string preorder(Node* root, string &ret_str) {
		if (root == nullptr) {
			return ret_str;
		}
		ret_str += to_string(root->val);
		preorder(root->left, ret_str);
		preorder(root->right, ret_str);
		return ret_str;
	}

	Node* deserialize(string str) {
		Node* ret_node;
		ret_node = new Node(0);

		return ret_node;
	}
};

int main() {
	Node* root, *left, * right, *left_right, *left_left, *right_left, *right_right;
	string ret_str;
	root = new Node(100);
	left = new Node(50);
	right = new Node(200);
	left_left = new Node(25);
	left_right = new Node(75);
	right_left = new Node(125);
	right_right = new Node(225);
	root -> left = left;
	root->right = right;
	left->left = left_left;
	left->right = left_right;
	Serialize_deserialize s1;
	s1.serialize(root);

}