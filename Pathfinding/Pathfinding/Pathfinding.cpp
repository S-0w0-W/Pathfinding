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

Node* LinkedList::DequeueHead() {
    //int data;
    struct Node* temp = head;

    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        //data = head->data;
        head = head->next;
        head->prev->next = NULL;
        head->prev = NULL;
        return temp;
    }

    return NULL;
}

Node* LinkedList::DequeueTail() {
    //int data;
    struct Node* temp = tail;

    if (tail == NULL)
    {
        return NULL;
    }
    else
    {
        //data = head->data;
        tail = tail->prev;
        tail->next->prev = NULL;
        tail->next = NULL;
        return temp;
    }

    return NULL;
}

void LinkedList::Print() {

    struct Node* curr = head;

    while (curr != NULL) {
        cout << curr->data;
        cout << " ";
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

int* LinkedList::Return(Node* x) {

    int* arr = NULL;
    arr = new int[200];
    int count = 0;

    struct Node* curr = x;

    while (curr != NULL) {
        arr[count] = curr->data;
        cout << arr[count];
        cout << " ";
        curr = curr->prev;
        count++;
    }
    /*arr[count] = count;
    cout << arr[count];*/
    cout << "\n";

    return arr;
}




Node* LinkedList::Pop(int x) {
    struct Node* curr = head;

    while (curr != NULL) {
        if (curr->data == x) {
            return curr;
        }
        curr = curr->next;
    }

    return NULL;
}

Node* LinkedList::Popindx(int x) {
    struct Node* curr = head;

    for (int i = 0; i < (x - 1); i++) {
        if (curr != NULL) {
            curr = curr->next;
        }
    }

    return curr;
}
