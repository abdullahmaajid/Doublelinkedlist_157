#include <iostream>
#include <string>
using namespace std;

class Node {
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START;
public:
	DoubleLinkedList();
	void addNote();
	void search(int rollNo, Node** previous, Node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void traverse();
	void revtraverse();
	void hapus();
	void searchData();
};

DoubleLinkedList::DoubleLinkedList() {
	START = NULL;
}

void DoubleLinkedList::addNote() {
	int nim;
	string nm;
	cout << "\n Enter the roll number of the student: ";
	cin >> nim;
	cout << "\n Enter the name number of the student: ";
	cin >> nm;
	Node* newNode = new Node();											// Step 1
	newNode->noMhs = nim;												// Step 2
	newNode->name = nm;													// Step 2

	/* Insert a node in the begining of a doubly - Linked List */
	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "\n Duplicate number not allowed" << endl;
			return;
		}
		newNode->next = START;											// Step 3
		if (START != NULL)
			START->prev = newNode;										// Step 4
		newNode->prev = NULL;											// Step 5
		START = newNode;												// Step 6
		return;
	}

	// Inserting a Node Beetwen The Nodes in the List //
		Node * current = START; //step1.a
	Node* previous = NULL; //step1.b
	while (current->next != NULL && current->next->noMhs < nim) //step1.c
	{
		previous = current; //1.d
		current = current->next; //1.e
	}

	if (current->next != NULL && nim == current->next->noMhs) {
		cout << "\nDuplicate roll numbers not allowed" << endl;
		return;
	}

	newNode->next = current->next; //step4
	newNode->prev = current; //step5
	if (current->next != NULL)
		current->next->pewv = newNode;	// step 6

}