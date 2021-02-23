#include "IncludeHeader.h"
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
		newNode->previous = NULL;//
	}
	else {
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = NULL;
		newNode->previous = temp;//
	}
}
// Insert Newnode At (x) Position In LinkedList
void LinkedList::InsertAtPosition (int value, int Position) {
	node* newNode = new node;
	newNode->data = value;
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
		return;  
	}
	if (Position == 0) {
		newNode->next = head;
		head->previous = newNode; //
		head = newNode;
		return;
	}
	node* temp = head;
	for (int i = 0; i < Position && temp->next != NULL; i++) {
		temp = temp->next;
	}
	if (temp == NULL) {
		this->Append (value);
		return;
	}
	newNode->previous = temp->previous;
	temp->previous->next = newNode;
	temp->previous = newNode;
	newNode->next = temp;
}
//Remove Node By But The Value of This Node
void  LinkedList::RemoverNodeByValue (int value) {
	if (head == NULL) {
		cout << "LinkedList Is UnderFlow..!" << endl;
		return;
	}
	node* temp = head;
	if (temp->data == value) {
		head = temp->next;
		if (head != NULL) {
			head->previous = NULL;
		}
		delete temp;
		return;
	}
	while (temp != NULL && temp->data != value) {
		temp = temp->next;
	}
	if (temp == NULL) {
		cout << "Not Found the (" << value << ") In LinkedList" << endl;
		return;
	}
	else {
		temp->previous->next = temp->next;
		if (temp->next != NULL) { //End of LinkedList.
			temp->next->previous = temp->previous; 
		}
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
		if (head != NULL) {
			head->previous = NULL;
		}
		delete temp;
		return;
	}
	else {
		node* temp = head;
		for (int i = 0; i < position && temp != NULL; i++) {
			temp = temp->next;
		}
		if (temp == NULL) {
			cout << "(" << position << ") Is Wrong Position..!" << endl;
			return;
		}
		temp->previous->next = temp->next;
		if (temp->next != NULL) { //End of LinkedList.
			temp->next->previous = temp->previous;
		}
		delete temp;
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
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	while (temp != NULL) {
		cout << temp->data << "\t";
		temp = temp->previous;
	}
	cout << endl;
}
//Destructor
LinkedList::~LinkedList () {}