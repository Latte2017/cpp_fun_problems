//cdc 2.1 
//remove dups without temp array in unsorted array

#include<iostream>

using namespace std;

class Node {
public:
	int data;
	Node* Next = NULL;
};

class Duplicates {
public:
	void removeDuplicates(Node** head) {
		Node* tmp1 = *head;
		Node* tmp2 = (*head);
		Node* prev = NULL;
		while (tmp1 != nullptr) {
			tmp2 = *head;
			while (tmp2 != nullptr) {
				if (tmp1->data == tmp2->data and tmp1 != tmp2) {
					tmp2->data = tmp2->Next->data;
					tmp2->Next = tmp2->Next->Next;
					free(tmp2->Next);
				}
				prev = tmp2;
				tmp2 = tmp2->Next;
			}
			tmp1 = tmp1->Next;
			
		}
	}
	void printLL(Node* head) {

		while (head)
		{
			cout << head->data << "-> ";
			head = head->Next;
		}
		cout << "NULL" << endl;
	}
};

int main() {
	Node* p1, *p2 , *p3 , *p4 ;
	p1 = new Node();
	p2 = new Node();
	p3 = new Node();
	p4 = new Node();
	p1->data = 1;
	p2->data = 2;
	p3->data = 2;
	p4->data = 2;
	p1->Next = p2;
	p2->Next = p3;
	p3->Next = p4;
	Duplicates d1;
	d1.removeDuplicates(&p1);
	d1.printLL(p1);
}