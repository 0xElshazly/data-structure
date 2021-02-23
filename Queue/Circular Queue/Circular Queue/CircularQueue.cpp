#include "CircularQueue.h"

//Constructor
CircularQueue::CircularQueue () {
	front = -1;
	rear = -1;
}
//isEmpty Function
bool CircularQueue::isEmpty () {
	if (front == -1 && rear == -1) {
		return true;
	}
	else {
		return false;
	}
}
//isFull Function
bool CircularQueue::isFull () {
	if (front == 0 && rear == SIZE - 1) {
		return true;
	}
	else if (front == rear + 1) {
		return true;
	}
	else {
		return false;
	}
}
//enqueue Function
void CircularQueue::enqueue (int value) {
	if (isFull ()) {
		cout << "Queue is OverFlow" << endl;
	}
	else {
		if (isEmpty ()) {
			front = 0;
			rear = 0;
			queue [rear] = value;
		}
		else if (rear == SIZE - 1) {
			rear = 0;
			queue [rear] = value;
		}
		else {
			rear++;
			queue [rear] = value;
		}
	}
}
//dequeue Function
void CircularQueue::dequeue () {
	if (isEmpty ()) {
		cout << "Queue is UnderFlow" << endl;
	}
	else {
		if (front == rear) {
			front = rear = -1;
		}
		else if (front == SIZE - 1) {
			front = 0;
		}
		else {
			front++;
		}
	}
}
//frontValue Function
int CircularQueue::frontValue () {
	if (isEmpty ()) {
		cout << "Queue is UnderFlow" << endl;
		return -1;
	}
	else {
		return queue [front];
	}
}
//frontValue Function
int CircularQueue::rearValue () {
	if (isEmpty ()) {
		cout << "Queue is UnderFlow" << endl;
		return -1;
	}
	else {
		return queue [rear];
	}
}
//display Function
void CircularQueue::display () {
	if (isEmpty ()) {
		cout << "Queue is UnderFlow" << endl;
	}
	else {
		if (front <= rear) {
			for (int i = front; i <= rear; i++) {
				cout << queue [i] << "\t";
			}
			cout << endl;
		}
		else {
			for (int i = front; i <= SIZE - 1; i++) {
				cout << queue [i] << "\t";
			}
			for (int i = 0; i <= rear; i++) {
				cout << queue [i] << "\t";
			}
			cout << endl;
		}

	}
}

CircularQueue::~CircularQueue () {
}
