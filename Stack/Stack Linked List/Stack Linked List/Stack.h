#pragma once
class Stack {
private:
	struct node {
		int data;
		node* next;
	};
	node* top;
public:
	Stack ();
	bool isEmpty ();
	bool isFull ();
	void push (int value);
	int pop ();
	int peek ();
	void Display ();
	~Stack ();
};

