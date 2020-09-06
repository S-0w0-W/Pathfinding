// Pathfinding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include "LinkedList.h"
#include "Data.h"
using namespace std;

// --------------------------------------- init ----------------------------------------------

// Variables to be passed in: 
// - start [row, col]
// - target location [row, col]
// - map [][]
//int startloc[2] = { 2, 2 };
int startlocR = 1;
int startlocC = 1;
//int targetloc[2] = { 3, 10 };
int targetlocR = 1;
int targetlocC = 17;
//int map[15][19];

// Size of map
const int rowSize = 15;
const int colSize = 19;
// -----------------------------------------------------------------------------------------

int main()
{
    //LinkedList test;
    //test.Insert(0);
    //test.Insert(2);
    //test.Insert(6);
    //test.Insert(13);
    //test.Insert(56);
    //test.Insert(4);



    //cout << test.Head()->data;
    //cout << " ";
    //cout << test.Popindx(4)->prev->data;
    //cout << " ";
    //cout << test.Popindx(4)->next->data;
    //cout << " ";
    //cout << test.Tail()->data;
    

    //Node* bruh = new Node;
    //bruh->setData(100);
    //test.Head()->setPrev(bruh);
    //cout << test.Head()->prev->data;

    //cout << test.Prev(test.Pop(13))->data;

    /*int* a = test.Return(test.Pop(13));
    cout << a[0];*/

    //cout << test.Popindx(4)->data;

    //cout << test.Head()->data;
    //cout << test.Tail()->data;
    //cout << test.Next(test.Head())->data;
    //cout << test.Prev(test.Tail())->data;
    //cout << test.Size();

    //test.Print();
    //cout << test.Find(4);
    //cout << "\n";
    //cout << test.Dequeue();
    //cout << "\n";
    //cout << test.Size();
    //cout << "\n";
    //test.Print();

    // =========================================================== BFS ================================================================
    //
    // --------------------------------------- init ----------------------------------------------
    // Queue initialiations
    LinkedList rowQ;
    LinkedList colQ;

    // Visited 3d matrix (same size as map) 
    int Visited[rowSize][colSize] = { 0 };

    // Directions when exploring:
    int rD[4] = { -1, 1, 0 , 0 };
    int cD[4] = { 0, 0, 1, -1 };
    // -----------------------------------------------------------------------------------------

    int indx = 1;
    rowQ.Insert(0);
    colQ.Insert(0);
    rowQ.Insert(startlocR);
    colQ.Insert(startlocC);
    Visited[startlocR][startlocC] = 1;

    struct Node* r = rowQ.Head();
    struct Node* c = colQ.Head();

    while (r->next != NULL) {

        r = r->next;
        c = c->next;
        indx++;


        if (r->data == targetlocR && c->data == targetlocC) {
            cout << "reached end! \n";
            cout << "Row: \n";
            int* returnR = rowQ.Return(rowQ.Popindx(indx));
            cout << "Col: \n";
            int* returnC = colQ.Return(colQ.Popindx(indx));
            cout << "\n";

            int steps = 0;
            while (returnR[steps] != NULL) {
                steps++;
            }

            for (int i = 0; i < steps-1; i++) {
                map[returnR[i]][returnC[i]] = 5;
            }

            for (int i = 0; i < rowSize; i++) {
                for (int j = 0; j < colSize; j++) {
                    cout << map[i][j];
                    if (j == colSize - 1) {
                        cout << "\n";
                    }

                }
            }

            break;
        }

        int count = 0;
        int newR = 0;
        int newC = 0;
        for (int i = 0; i < 4; i++) {
            newR = r->data + rD[i];
            newC = c->data + cD[i];

            if (newR <= 0 || newC <= 0) {
                count++;
            }
            else if (newR < 0 || newC < 0 || newR >= rowSize || newC >= colSize || Visited[newR][newC] == 1 || map[newR][newC] == 1) {
                count++;
            }

            if (count <= 0) {
                rowQ.Insert(newR);
                rowQ.Tail()->setPrev(r);
                colQ.Insert(newC);
                colQ.Tail()->setPrev(c);
                Visited[newR][newC] = 1;
            }
            count = 0;
        }
        
    }

    // =================================================================================================================================

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

