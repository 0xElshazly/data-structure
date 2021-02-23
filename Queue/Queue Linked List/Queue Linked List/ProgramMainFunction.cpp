#include "IncludeHeader.h"
int main () {
	Queue q;
	q.enqueue (5);
	q.enqueue (10);
	q.enqueue (15);
	q.display ();         // 5   10    15
	cout << "Front value is: = " << q.frontValue () << endl; //5
	q.dequeue (); // 5
	q.display ();  //10       15
	cout << "Front value is: = " << q.frontValue () << endl;//10
	q.dequeue ();//10
	q.display ();//15
	cout << "Front value is: = " << q.frontValue () << endl;//15
	q.dequeue ();//15
	q.display ();//Empty
	system ("pause");
	return 0;
}