#pragma once
class LinkedList {                                                     //LinkedList Class.
private:
	struct node {                                                      //Insert Node Contain Data & Pointer to another Node.
		int data;                                                      //Node Data.
		node* next;                                                    //Poinetr to Next Node.
		node* previous;                                                //Pointer to Previous Node.
		node () {                                                      //Constructor To Struct.
			next = NULL;
			previous = NULL;
		}
	};
	node* head;                                                        //Pointer To First Node In LinkedList.
public:
	LinkedList ();                                                     //Constructor.
	void Append (int value);                                           //Insert Newnode At The End Of LinkedList.
	void InsertAtPosition (int value, int Position);                   //Insert Newnode At (x) Position In LinkedList.
	void RemoverNodeByValue (int value);                               //Remove Node By But The Value of This Node.
	void RemoverNodeAtPosition (int position);                         //Remove Node By But Position of This Node.
	void Display ();                                                   //Show LinkedList Data (First to End Value).
	void Reverse ();                                                   //Show LinkedList Data (End to First Value).
	~LinkedList ();                                                    //Destructor.
};