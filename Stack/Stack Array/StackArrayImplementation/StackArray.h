#ifndef STACKARRAY
#define STACKARRAY
#include "Includes.h"
#define SIZE 5

template <class T>
class FixedStack {
private:
	short top;
	T stack[SIZE];
public:

	FixedStack(); //Constructor
	void push(T);
	T pop();
	T peak();
	void clearStack();
	int getNumOfEmlement();
	bool isFull();
	bool isEmpty();
	void display();
};

#include "StackImplementation.cpp"
#endif