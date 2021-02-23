#ifndef STACKIMPLEMENTAION
#define STACKIMPLEMENTAION
#include "StackArray.h"

template <class T>
FixedStack<T>::FixedStack() {
	top = -1;
}
//------ Bush------
template <class T>
void FixedStack<T>::push(T item) {
	assert(!isFull() && "Stack Is OverFlow");
	stack[++top] = item;
}
//------ Pop-------
template <class T>
T FixedStack<T>::pop(){
	assert(!isEmpty() && "Stack Is UnderFlow");
	T item = stack[top];
	top--;
	return item;
}
//-------Peak--------
template <class T>
T FixedStack<T>::peak(){
	assert(!isEmpty() && "Stack Is UnderFlow");
	return stack[top];
}
//-------IsFull--------
template <class T>
bool FixedStack<T>::isFull() {
	return top == SIZE;
}
//--------IsEmpty-------
template <class T>
bool FixedStack<T>::isEmpty() {
	return top == -1;
}
//--------Display---------
template <class T>
void FixedStack<T>::display() {
	assert(!isEmpty() && "Stack Is UnderFlow");
	for (short i = top; i >= 0; i--) {
		cout << stack[i] << endl;
	}
}
//------ClearStack---------
template <class T>
void FixedStack<T>::clearStack() {
	top = -1;
}
//------GetStackElement-------
template <class T>
int FixedStack<T>::getNumOfEmlement() {
	return top + 1;
}
//-----------------------------

#endif