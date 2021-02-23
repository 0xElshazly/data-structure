#include "IncludeHeader.h"
int main () {

	LinkedList list;

	list.Display ();                              //  LinkedList Is UnderFlow    
	list.Reverse ();                              //  LinkedList Is UnderFlow    
	list.RemoverNodeAtPosition (0);               //  LinkedList Is UnderFlow    
	list.RemoverNodeByValue (10);                 //  LinkedList Is UnderFlow    

	cout << "-----------------------------------" << endl;

	list.Append (7);
	list.Append (5);
	list.Append (1);
	list.Append (2);
	list.Display ();                                //  7    5    1    2 
	list.RemoverNodeByValue (7);
	list.Display ();                                //  5    1    2 
	list.Append (7);
	list.Display ();                                //  5    1    2    7
	list.RemoverNodeByValue (2);
	list.Display ();                                //  5    1    7
	list.Append (8);
	list.Display ();                                //  5    1    7    8
	list.RemoverNodeByValue (8);
	list.Display ();                                //  5    1    7    

	cout << "-----------------------------------" << endl;

	list.RemoverNodeByValue (10);                   //Not Found the 10 In LinkedList

	cout << "-----------------------------------" << endl;

	list.InsertAtPosition (88, 3);
	list.Display ();                               //  5    1    7     88
	list.InsertAtPosition (99, 0);
	list.Display ();                               //  99   5    1    7     88
	list.InsertAtPosition (55, 100);
	list.Display ();                               //  99   5    1    7     88     55

	cout << "-----------------------------------" << endl;

	list.RemoverNodeAtPosition (0);
	list.Display ();                               //  5    1    7     88     55
	list.RemoverNodeAtPosition (4);
	list.Display ();                               //  5    1    7     88
	list.RemoverNodeAtPosition (2);
	list.Display ();                               //  5    1    88

	cout << "-----------------------------------" << endl;

	list.RemoverNodeAtPosition (100);

	cout << "-----------------------------------" << endl;

	list.Append (77);
	list.Append (66);
	list.Display ();                            //  5    1    88    77    66
	list.Reverse ();
	list.Display ();                            //  66    77    88    1    5

	cout << "-----------------------------------" << endl;
	system ("pause");
	return 0;
}