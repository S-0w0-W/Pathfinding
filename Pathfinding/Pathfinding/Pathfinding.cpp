// Pathfinding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include "LinkedList.h"
using namespace std;

void bfs() {

 
}


int main()
{
    LinkedList test;
    LinkedList test1;
    test.Insert(0);
    test.Insert(2);
    test.Insert(6);
    test.Insert(13);
    test.Insert(56);
    test.Insert(4);

    //cout << test.Head()->data;
    //cout << test.Tail()->data;
    //cout << test.Next(test.Head())->data;
    //cout << test.Prev(test.Tail())->data;
    //cout << test.Size();

    test.Print();
    cout << test.Find(4);
    cout << "\n";
    cout << test.Dequeue();
    cout << "\n";
    cout << test.Size();
    cout << "\n";
    test.Print();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


//int LinkedList::Dequeue() {
//    int data;
//
//    if (head == NULL)
//    {
//        return -1;
//    }
//    else
//    {
//        data = head->data;
//        head = head->next;
//        head->prev->next = NULL;
//        head->prev = NULL;
//        return data;
//    }
//
//    return -1;
//}
//
//void LinkedList::Print() {
//    Node* curr = new Node;
//    curr = head;
//    if (head == NULL) {
//        delete curr;
//    }
//    else {
//        cout << curr->data;
//        while (curr->next != NULL) {
//            curr = curr->next;
//            cout << curr->data;
//        }
//        cout << "\n";
//        delete curr;
//    }
//}