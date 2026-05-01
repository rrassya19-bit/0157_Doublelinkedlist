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

// Step 3: Insert at beginning if list empty or nim smallest
    if (START == NULL || nim <= START->noMhs)
    {
        if (START != NULL && nim == START->noMhs)
        {
            cout << "\nDuplicate roll numbers not allowed" << endl;
            return;
        }
        // Step 4: newNode.next = START
        newnode->next = START;

        // Step 5: START.prev = newNode (if START exists)
        if (START != NULL)
            START->prev = newnode;

        // Step 6: newNode.prev = NULL
        newnode->prev = NULL;

        // Step 7: START = newNode
        START = newnode;
        return;
    }