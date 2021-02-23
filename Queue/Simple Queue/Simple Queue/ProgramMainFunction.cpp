#include "IncludeHeader.h"
int main () {
	SimpleQueue q;

	q.enqueue (5);
	q.enqueue (7);
	q.enqueue (9);
	q.enqueue (11);
	q.enqueue (13);
	q.display ();
	cout << "The First Value in Queue is: " << q.frontValue () << endl;
	cout << "The Last Value in Queue is: " << q.rearValue () << endl;
	q.dequeue ();
	q.display ();
	cout << "The First Value in Queue is: " << q.frontValue () << endl;
	cout << "The Last Value in Queue is: " << q.rearValue () << endl;
	q.dequeue ();
	q.display ();
	cout << "The First Value in Queue is: " << q.frontValue () << endl;
	cout << "The Last Value in Queue is: " << q.rearValue () << endl;
	q.dequeue ();
	q.display ();
	cout << "The First Value in Queue is: " << q.frontValue () << endl;
	cout << "The Last Value in Queue is: " << q.rearValue () << endl;
	q.dequeue ();
	q.display ();
	cout << "The First Value in Queue is: " << q.frontValue () << endl;
	cout << "The Last Value in Queue is: " << q.rearValue () << endl;
	q.dequeue ();
	q.display ();
	cout << "The First Value in Queue is: " << q.frontValue () << endl;
	cout << "The Last Value in Queue is: " << q.rearValue () << endl;
	cout << "-----------------------------------" << endl;
	q.enqueue (6);
	q.enqueue (8);
	q.enqueue (10);
	q.enqueue (12);
	q.enqueue (14);
	q.display ();
	q.enqueue (16);
	q.display ();
	cout << "-----------------------------------" << endl;

	system ("pause");
	return 0;
}