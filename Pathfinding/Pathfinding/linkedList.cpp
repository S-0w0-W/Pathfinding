#include <stdint.h>
#include <stdio.h>
#include "LinkedList.h"
using namespace std;


LinkedList::LinkedList() {
	head = NULL;
	tail = NULL;
}

int LinkedList::Insert(int n)
{
	Node* temp = new Node;
	temp->data = n;
	temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }

	return 0;
}


int LinkedList::Head() {
    return head->data;
}

int LinkedList::Tail() {
    return tail->data;
}