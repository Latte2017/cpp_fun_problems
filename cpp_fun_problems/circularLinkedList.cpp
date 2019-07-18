//cdc 2.6
//return the first repeated node of a circular linkedlist

#include<iostream>

using namespace std;


class Node {
public:
	int val = 0;
	Node* next = NULL;
	Node(int d) {
		val = d;
		Node* next = NULL;
	}
};
class circularLinkedList {
public:
	Node* detectCircular(Node* head) {
		Node* fast_ptr = head->next->next;
		Node* slow_ptr = head;
		while (fast_ptr != slow_ptr) {
			fast_ptr = fast_ptr->next->next;
			slow_ptr = slow_ptr->next;
		}
		return fast_ptr;
	}
};

int main() {
	Node* A, * B, * C, * D, *E;
	A = new Node(1);
	B = new Node(2);
	C = new Node(3);
	D = new Node(4);
	A->next = B;
	B->next = C;
	C->next = D;
	D->next = B;
	circularLinkedList c1;
	E = c1.detectCircular(A);
	cout << "The circular loop starts at " << E->val << endl;
}