#include<iostream>
#include <algorithm>

using namespace std;

class Node {
public:
	int val;
	Node* left = nullptr;
	Node* right = nullptr;
	Node(int x) {
		val = x;
	}
};

class Balanced {
private:
	int height(Node* root) {
		if (root == nullptr) {
			return 0;
		}
		return max(height(root->left), height(root->right)) + 1;
	}

public:

	bool isBalanced(Node* root) {
		if (root == nullptr) {
			return true;
		}
		int l_height = height(root->left);
		int r_height = height(root->right);
		if (abs(l_height - r_height) > 1) {
			return false;
		}
		return true;
	}
};

int main(){
	bool ret_val;
	Node* root = new Node(50);
	Node* left = new Node(25);
	Node* left_left = new Node(15);
	Node* left_left_left = new Node(5);
	root->left = left;
	root->left->left = left_left;
	root->left->left->left = left_left_left;
	Balanced b1;
	ret_val = b1.isBalanced(root);
	cout << "ret value is " << ret_val << endl;
}