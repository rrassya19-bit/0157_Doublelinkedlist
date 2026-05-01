#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }
};

void addnode()
{
    int nim;
    cout << "\nEnter the roll number of the student: ";
    cin >> nim;

    // Step 1: Allocate memory for new node
    Node *newnode = new Node();

    // Step 2: Assign values to data fields
    newnode->noMhs = nim;
}