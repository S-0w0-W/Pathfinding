#include <stdint.h>
#include <stdio.h>
#include "LinkedList.h"

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


