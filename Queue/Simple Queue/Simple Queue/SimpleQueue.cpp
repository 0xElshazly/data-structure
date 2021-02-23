#include "SimpleQueue.h"

//Constructor
SimpleQueue::SimpleQueue () {
	front = -1;
	rear = -1;
}
//isEmpty Function
bool SimpleQueue::isEmpty () {
	if (front == -1 && rear == -1) {
		return true;
	}
	else if (front == rear + 1) {
		return true;
	}
	else {
		return false;
	}
}
//isFull Function
bool SimpleQueue::isFull () {
	if (rear == SIZE - 1) {
		return true; 
	}
	else { 
		return false;
	}
}
//enqueue Function
void SimpleQueue::enqueue (int value) {
	if (isFull ()) {
		cout << "Queue is OverFlow" << endl;
	}
	else {
		if (isEmpty ()) {
			front++;
			rear++;
			queue [rear] = value;
		}
		else {
			rear++;
			queue [rear] = value;
		}
	}
}
//dequeue Function
void SimpleQueue::dequeue () {
	if (isEmpty ()) {
		cout << "Queue is UnderFlow" << endl;
	}
	else {
		if (front == rear) {
			front++;
			front = rear = -1;
		}
		else {
			front++;
		}
	}
}
//frontValue Function
int SimpleQueue::frontValue () {
	if (isEmpty ()) {
		cout << "Queue is UnderFlow" << endl;
		return -1;
	}
	else {
		return queue [front];
	}
}
//rearValue Function
int SimpleQueue::rearValue () {
	if (isEmpty ()) {
		cout << "Queue is UnderFlow" << endl;
		return -1;
	}
	else {
		return queue [rear];
	}
}
//display Function
void SimpleQueue::display () {
	if (isEmpty ()) {
		cout << "Queue is UnderFlow" << endl;
	}
	else {
		for (int i = front; i <= rear; i++) {
			cout << queue [i] << "\t";
		}
		cout << endl;
	}
}

SimpleQueue::~SimpleQueue () {
}
