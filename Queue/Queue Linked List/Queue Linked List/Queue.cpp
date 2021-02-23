#include "Queue.h"
#include "IncludeHeader.h"
Queue::Queue () {
}
//Enqueue 
void Queue::enqueue (int value) {
	node* newNode = new node;
	newNode->data = value; 
	newNode->next = NULL;
	if (isEmpty ()) {
		front = tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = newNode; 
	}
	
}
//Dequeue
void Queue::dequeue () {
	if (isEmpty ()) {
		cout << "Stack Is Empty" << endl;
		return;
	}
	node* temp = front;
	if (front == tail) {
		front = tail = nullptr;
	}
	else {
		front = front->next;
	}
	delete temp;
}
//Front Value
int Queue::frontValue () {
	if (isEmpty ()) {
		cout << "Stack Is Empty" << endl;
		return -1;
	}
	else {
		return front->data;
	}
}
//isEmpty
bool Queue::isEmpty () {
	if (front == nullptr && tail == nullptr) {
		return true;
	}
	else {
		return false;
	}
}
//Display
void Queue::display () {
	if (isEmpty ()) {
		cout << "Queue is UderFlow" << endl;
	}
	else {
		node* temp = front;
		while (temp != NULL) {
			cout << temp->data << "\t";
			temp = temp->next;
		}
		cout << endl;
	}
}
Queue::~Queue () {
}
