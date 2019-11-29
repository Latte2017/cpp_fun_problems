/*
Given 2 trees return if they are same or different tress
*/

#include<iostream>
#include<list>

using namespace std;

class Node {
public:
	int val;
	Node* left;
	Node* right;
	Node(int x) {
		val = x;
	}
};

class Trees {
public:
	
	bool getDifference(Node* n1, Node* n2) {
		if (n1 == nullptr || n2 == nullptr)
			return (n1 == n2);
		return (n1->val == n2->val && getDifference(n1->left, n2->left) && getDifference(n1->right, n2->right));
	}

};

int main(){
	Node* root1 = new Node(1);
	Node* left1 = new Node(1);
	Node* root2 = new Node(1);
	Node* left2 = new Node(1);
	root1->left = left1;
	root2->left = left2;
	Trees t1;
	cout << t1.getDifference(root1, root2) << endl;
	}