#pragma once

struct Node {
public:
    int data;
    Node* next;
    Node* prev;

    void setPrev(Node* x) {
        prev = x;
    }

    void setNext(Node* x) {
        next = x;
    }

    void setData(int x) {
        data = x;
    }
};

class LinkedList
{
private:
    Node* head, * tail;
public:
    LinkedList();                // Constructor
    void Insert(int data);        // Inserts a integer to the list
    Node* DequeueHead();        // Dequeue the head of the list and returns the data of the head
    Node* DequeueTail();        // Dequeue the Tail of the list and returns the data of the Tail
    Node* Head();                // Returns the head Node
    Node* Tail();                // Returns the tail Node
    Node* Next(Node* x);        // Returns the next Node of the input node
    Node* Prev(Node* x);        // Returns the previous Node of the input node
    int Size();                    // Returns the size of the list
    void Print();                // Prints out data of list
    int Find(int x);            // Returns the index(starting from 1) of input integer, returns -1 if not found
    int* Return(Node* x);        // Returns a pointer to array of integer of node data back to the start starting from input node
    int* ReturnReverse(Node* x); // same as Return() function but the array is reversed in order
    Node* Pop(int x);            // Returns a Pointer to the first Node which has the data of input integer starting from head
    Node* Popindx(int x);            // Returns a Pointer to the Node which has the data of input integer
};
