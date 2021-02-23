#include "IncludeHeader.h"
int main () {
	Stack s;
	s.push (1);
	s.push (2);
	s.push (3);
	s.push (4);
	cout << "Top = " << s.peek () << endl;  //4
	s.Display ();		                    //4    3     2     1
	s.pop ();			                    //Remove 4 
	cout << "Top = " << s.peek () << endl;  //3
	s.Display ();		                    //3    2     1 
	s.pop ();			                    //Remove  3
	cout << "Top = " << s.peek () << endl;  //2
	s.Display ();                           //2   1
	s.pop ();                               //Remove 2
	s.Display ();                           // 1
	system ("pause");
	return 0;
}