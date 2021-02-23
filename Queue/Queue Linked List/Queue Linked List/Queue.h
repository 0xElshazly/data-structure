#pragma once
#include "IncludeHeader.h"
class Queue {
private:
	struct node {
		int data;
		node* next;
	};
	node* front = nullptr;
	node* tail = nullptr;
public:
	Queue ();
	void enqueue (int value);
	void dequeue ();
	int frontValue ();
	void display ();
	bool isEmpty ();
	~Queue ();
};

