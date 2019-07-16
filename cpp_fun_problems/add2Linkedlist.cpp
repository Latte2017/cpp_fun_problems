//cdc 2.5
//given 2 numbers in reverse order andd them
// (7->1->6) + (5 ->9->2) thats 617 + 295 = 912 and output in revese is 2-> 1 -> 9

#include<iostream>

using namespace std;

class Node {
public:
	int val = 0;
	Node* next;
	Node(int d) {
		val = d;
		next = NULL;
	}
};

class LinkedList {
public:
	void createLinkedList(Node** head, int d) {
		Node* n1 = new Node(d);
		
		(*head) = n1;
		return;
	}
	void addToLinkedList(Node **head, int d) {
		Node* n1 = new Node(d), *n2 = *head;
		n1->next = nullptr;
		while (n2->next != nullptr) {
			n2 = n2->next;
		}
		n2->next = n1;
		return;
	}
	Node* add2Numbers(Node* l1, Node* l2) {
		Node* head = l1, * tail = l2;
		int carry = 0, sum = 0;
		while (l1 and l2) {
			 sum= l1->val + l2->val + carry;
			 carry = sum / 10;
			 sum = sum % 10;
			 l1->val = sum;
			 l1 = l1->next;
			 l2 = l2->next;
		}

		while (l1) {
			sum += l1->val + carry;
			carry = sum / 10;
			sum = sum % 10;
			l1->val = sum;
			l1 = l1->next;
		}
		
		while (l2) {
			sum += l2->val + carry;
			carry = sum / 10;
			sum = sum % 10;
			Node* newNode = new Node(sum);
			l2 = l2->next;
		}

		while (carry) {
			int tmp = carry / 10;
			carry = carry % 10;
			Node* newNode = new Node(carry);
		}
		return head;

	}
	
	void printSum(Node** head) {
		while (*head) {
			cout << (*head)->val << "-> ";
			(*head) = (*head)->next;
		}
		cout << " NULL " << endl;
		return;
	}
	
};

int main() {
	Node* head1 = NULL, *head2 = NULL;
	LinkedList l1;
	l1.createLinkedList(&head1, 7);
	l1.addToLinkedList(&head1, 1);
	l1.addToLinkedList(&head1, 6);
	l1.createLinkedList(&head2, 5);
	l1.addToLinkedList(&head2, 9);
	l1.addToLinkedList(&head2, 2);
	//Node *n2 = l1.add2Numbers(&head1, &head2);
	
	Node* n3 = l1.add2Numbers(head1, head2);
	l1.printSum(&n3);
	
	//l1.printSum(&n2);
	
	return 0;
}