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

    void addnode()
    {
        int nim;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;

        // Step 1: Allocate memory for new node
        Node *newnode = new Node();

        // Step 2: Assign values to data fields
        newnode->noMhs = nim;

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

        //insert in between node
        // Step 8: Locate position for insertion
        Node *current = START;
        while (current->next != NULL && current->next->noMhs < nim)
        {
            current = current->next;
        }

        if (current->next != NULL && nim == current->next->noMhs)
        {
            cout << "\nDuplicate roll numbers not allowed" << endl;
            return;
        }

        // Step 9: Insert newNode between current and current->next
        newnode->next = current->next; // Step 9a
        newnode->prev = current;       // Step 9b

        // insert last node
        if (current->next != NULL)
            current->next->prev = newnode; // Step 9c

        current->next = newnode; // Step 9d
    }

    void hapus()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

        cout << "\nEnter the roll number of the student whose record is to be deleted: ";
        int rollno;
        cin >> rollno;

        Node *current = START;

        // Step 1: Traverse the list to find the node
        while (current != NULL && current->noMhs != rollno)
            current = current->next;

        if (current == NULL)
        {
            cout << "Record not found" << endl;
            return;
        }
    }
};