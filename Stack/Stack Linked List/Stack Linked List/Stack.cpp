#include "Stack.h"
#include"IncludeHeader.h"
//Constructor
Stack::Stack () {
	top = nullptr;
}
//Check If Stack Is Empty Or Not?
bool Stack::isEmpty () {
	if (top == nullptr) {
		return true;
	}
	else {
		return false;
	}
}
//Push Value To Stack
void Stack::push (int value) {
	node* newNode = new node;
	newNode->data = value;
	if (isEmpty()) {
		newNode->next = nullptr;
	}
	else {
		newNode->next = top;
	}
	top = newNode;
}
//Pop Value From Stack
int Stack::pop () {
	int val;
	if (isEmpty ()) {
		cout << "Stack Is UnderFlow" << endl;
		return -1;
	}
	else {
		node* temp = top;
		top = temp->next;
		val = temp->data;
		delete (temp);
		return val;
	}
}
//Peek Return Top Value In Stack
int Stack::peek () {
	if (isEmpty ()) {
		cout << "Stack Is UnderFlow" << endl;
		return -1;
	}
	else {
		return top->data;
	}
}
//Display 
void Stack::Display () {
	if (isEmpty ()) {
		cout << "Stack Is UnderFlow" << endl;
	}
	else {
		node* current = top;
		while (current != NULL) {
			cout << current->data << "\t";
			current = current->next;
		}
		cout << endl;
	}
}
//Destructor
Stack::~Stack () {
}
