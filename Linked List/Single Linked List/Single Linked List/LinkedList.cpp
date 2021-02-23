#include "Header.h"
#include "LinkedList.h"
//Constructor
LinkedList::LinkedList () {
	head = NULL;
}
//Append(Insert Node at the end of LinkedList)
void LinkedList::Append (int value) {
	node* newNode = new node;
	newNode->data = value;
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
		newNode->next = NULL;
	}
	else {    
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode; 
		newNode->next = NULL;
	}
}
// Insert Newnode At (x) Position In LinkedList
void LinkedList::InsertAtPosition (int value, int Position) {
	node* newNode = new node;
	newNode->data = value;
	newNode->next = NULL;
	if (Position == 0) {
		newNode->next = head;
		head = newNode;
		return;
	}
	node* temp = head;
	for (int i = 0; i < Position - 1 && temp->next != NULL; i++) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}
//Remove Node By But The Value of This Node
void  LinkedList::RemoverNodeByValue (int value) {
	if (head == NULL) {
		cout << "LinkedList Is UnderFlow..!" << endl;
		return;
	}
	node* temp, *previous;
	temp = previous = head;  
	if (temp->data == value) {
		head = temp->next;
		delete temp;
		return;
	}
	while (temp != NULL && temp->data != value) {
		previous = temp;
		temp = temp->next;  
	}
	if (temp == NULL) {
		cout << "Not Found the (" << value << ") In LinkedList" << endl;
		return;
	}
	else {
		previous->next = temp->next;
		delete temp;
	}
}
//Remove Node By But Position of This Node
void LinkedList::RemoverNodeAtPosition (int position) {
	if (head == NULL) {
		cout << "LinkedList Is UnderFlow..!" << endl;
		return;
	}
	if (position == 0) {
		node* temp = head;
		head = head->next;
		delete temp;
	}
	else {
		node* temp = head;
		for (int i = 0; i < position - 1 && temp->next != NULL; i++) {
			temp = temp->next;
		}
		if (temp->next == NULL) {
			cout << "(" << position << ") Is Wrong Position..!" << endl;
			return;
		}
		node* temp2 = temp->next;
		temp->next = temp->next->next;
		delete temp2;
	}
}
//Display
void LinkedList::Display () {
	node* temp = head;
	if (head == NULL) {
		cout << "LinkedList Is UnderFlow..!" << endl;
		return;
	}
	while (temp != NULL) {
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;  
}
//Reversr Show LinkedList Data (End to First Value)
void LinkedList::Reverse () {
	if (head == NULL) {
		cout << "LinkedList Is UnderFlow..!" << endl;
		return;
	}
	node* previous = NULL;
	node* current = head;
	node* next = NULL;
	while (current != NULL) {
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	head = previous; 
}
//Destructor
LinkedList::~LinkedList () {}