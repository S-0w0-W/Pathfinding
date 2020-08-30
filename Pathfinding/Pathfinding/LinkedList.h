#pragma once
#include "Pathfinding.cpp"

class LinkedList
{
private:
	Node* head, *tail;
public:
	LinkedList();
	int Insert(int data);
	//int dequeue();
	int Head();
	int Tail();
};

