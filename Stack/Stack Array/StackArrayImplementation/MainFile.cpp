#include "Includes.h"
#include "StackArray.h"

void main() {
	FixedStack<char> s;
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.display();
	s.pop();
	s.display();
	/*FixedStack<int> stk;

	stk.push(5);
	stk.push(7);
	stk.push(9);
	stk.push(15);
	stk.push(30);

	stk.display();

	stk.pop();

	stk.display();*/


	/*FixedStack<int> stack1;
	cout << "1- Clear" << endl
		 << "2- Push Element" << endl
		 << "3- Pop Element" << endl
		 << "4- Peak Element" << endl
		 << "5- Display" << endl
		 << "6- Check is Empty" << endl
		 << "7- Check is Full" << endl
		 << "8- Get The Number of Element" << endl;

	int ch;
	cout << "Enter A Number Between The Above Num...!" << endl;
	cout << "Num: "; cin >> ch;
	switch (ch) {
	case 1:
		stack1.clearStack();
		break;
	case 2:
		cout << "Enter An Integer Value...!" << endl;
		int value; cin >> value;
		stack1.push(value);
		break;
	case 3:
		cout << "Last Element in Stack is : " << stack1.pop();
		break;
	case 4:
		cout << "Last Element in Stack is : " << stack1.peak();
		break;
	case 5:
		stack1.display();
		break;
	case 6:
		if (stack1.isEmpty())
			cout << "Stack is Empty" << endl;
		else
			cout << "Stack is not Empty" << endl;
		break;
	case 7:
		if (stack1.isFull())
			cout << "Stack is Full" << endl;
		else
			cout << "Stack is not Full" << endl;
		break;
	case 8:
		cout << "Stack have " << stack1.getNumOfEmlement() << " Element" << endl;
	default:
		cout << "Error Please Eneter A Number Between 1 to 8" << endl;
	}
	*/






	system("pause");
}