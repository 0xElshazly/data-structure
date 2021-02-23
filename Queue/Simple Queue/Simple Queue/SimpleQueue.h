#pragma once
#include "IncludeHeader.h"
#define SIZE 5
class SimpleQueue {
private:
	int queue [SIZE];
	int front, rear;
public:
	SimpleQueue ();
	bool isEmpty ();
	bool isFull ();
	void enqueue (int value);
	void dequeue ();
	int frontValue ();
	int rearValue ();
	void display ();
	~SimpleQueue ();
};