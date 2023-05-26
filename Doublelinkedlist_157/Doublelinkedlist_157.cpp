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
	/* Insert a node in the begining of a doubly - Linked List */
}