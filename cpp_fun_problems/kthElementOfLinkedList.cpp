
//cdc 2.2
//find the kth element from the end

#include<iostream>

using namespace std;

class Node {
public:
	int data;
	Node* Next = nullptr;
};

class LinkedList {
public:
	void createLinkedList(Node** head, int d) {
		Node* l1 = new Node();
		l1->data = d;
		(*head) = l1;
	}

	void appendToList(Node** head, int d) {
		Node* l1 = new Node();
		l1->data = d;
		Node* tmp = *head;
		while (tmp->Next != nullptr) {
			tmp = tmp->Next;
		}
		tmp->Next = l1;
		return;
	}

	Node* kthElement(Node** head, int k) {
		Node* t1, * t2;
		t1 = *head;
		t2 = *head;
		while (k >= 0) {
			t2 = t2->Next;
			--k;
		}
		while (t2 != nullptr) {
			t2 = t2->Next;
			t1 = t1->Next;
		}
		return t1;
	}
};

int main() {
	Node* head;
	LinkedList ll1;
	ll1.createLinkedList(&head, 5);
	ll1.appendToList(&head, 10);
	ll1.appendToList(&head, 15);
	ll1.appendToList(&head, 22);
	Node* ret_node =  ll1.kthElement(&head, 2);
	cout << "The returned node is " << ret_node->data << endl;
}
