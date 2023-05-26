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
	START = NULL
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

