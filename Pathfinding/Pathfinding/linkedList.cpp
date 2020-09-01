#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include "LinkedList.h"
using namespace std;


LinkedList::LinkedList() {
	head = NULL;
	tail = NULL;
}

void LinkedList::Insert(int n)
{
	Node* temp = new Node;
	temp->data = n;
	temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->prev = tail;
        tail->next = temp;
        tail = tail->next;
    }

}

Node* LinkedList::Head() {
    return head;
}

Node* LinkedList::Tail() {
    return tail;
}

Node* LinkedList::Next(Node* x) {
    return x->next;
}

Node* LinkedList::Prev(Node* x) {
    return x->prev;
}

int LinkedList::Size() {
    int count = 0;
    if (head == NULL) {
        return count;
    }
    struct Node* curr = head;
    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    return count;
}

int LinkedList::Dequeue() {
    int data;

    if (head == NULL)
    {
        return -1;
    }
    else
    {
        data = head->data;
        head = head->next;
        head->prev->next = NULL;
        head->prev = NULL;
        return data;
    }

    return -1;
}

void LinkedList::Print() {

    struct Node* curr = head;

    while (curr != NULL) {
        cout << curr->data;
        curr = curr->next;
    }
    cout << "\n";

}

int LinkedList::Find(int x) {
    int count = 1;
    if (head == NULL) {
        return -1;
    }
    struct Node* curr = head;
    while (curr != NULL) {
        if (curr->data == x) {
            return count;
        }
        else {
            count++;
            curr = curr->next;
        }
    }
    return -1;
}