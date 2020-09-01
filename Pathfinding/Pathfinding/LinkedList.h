#pragma once

struct Node {
public:
	int data;
	Node* next;
	Node* prev;
};

class LinkedList
{
private:
	Node* head, *tail;
public:
	LinkedList();				// Constructor
	void Insert(int data);		// Inserts a integer to the list
	int Dequeue();				// Dequeue the head of the list and returns the data of the head
	Node* Head();				// Returns the head Node
	Node* Tail();				// Returns the tail Node
	Node* Next(Node* x);		// Returns the next Node of the input node
	Node* Prev(Node* x);		// Returns the previous Node of the input node
	int Size();					// Returns the size of the list
	void Print();				// Prints out data of list
	int Find(int x);			// Returns the index(starting from 1) of input integer, returns -1 if not found
};
