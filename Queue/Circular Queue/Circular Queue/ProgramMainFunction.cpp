#include "IncludeHeader.h"
int main () {
	CircularQueue q;

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
	q.display (); // 6  8  10  12  14
	cout << "The First Value in Queue is: " << q.frontValue () << endl;
	cout << "The Last Value in Queue is: " << q.rearValue () << endl;
	q.dequeue ();
	q.display (); // 8  10  12  14
	q.enqueue (16);
	q.display (); // 8  10  12  14  16
	cout << "The First Value in Queue is: " << q.frontValue () << endl;
	cout << "The Last Value in Queue is: " << q.rearValue () << endl;
	q.dequeue ();
	q.dequeue ();
	q.dequeue ();
	q.display (); // 14 16
	q.enqueue (18);
	q.enqueue (20);
	q.enqueue (22);
	q.display (); // 14  16  18  20  22
	cout << "The First Value in Queue is: " << q.frontValue () << endl;
	cout << "The Last Value in Queue is: " << q.rearValue () << endl;
	cout << "-----------------------------------" << endl;
	
	system ("pause");
	return 0;
}