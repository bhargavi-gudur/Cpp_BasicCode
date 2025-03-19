/**
 * @file singleLinkedList.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2025-03-13
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct node
{
    int data;      // Data part of the node
    node *nextptr; // Pointer to the next node
};

struct node *head = nullptr, *newnode = nullptr, *temp = nullptr;

void singleLinkedList();
void displayLinkedList();

int main()
{
    singleLinkedList();
    return 0;
}

void singleLinkedList()
{
    int choice = 1; // Initialize choice to a non-zero value for entering the loop
    while (choice)
    {
        // Dynamically allocate memory for the new node
        newnode = new node();

        // Take user input for the node's data
        cout << "Enter data for the node: ";
        cin >> newnode->data;
        newnode->nextptr = nullptr;

        // Link the new node to the list
        if (head == nullptr)
        {
            head = temp = newnode; // First node in the list
        }
        else
        {
            temp->nextptr = newnode; // Append the new node
            temp = newnode;          // Update temp to the last node
        }

        // Ask the user if they want to add another node
        cout << "Do you want to add another node? (1 for Yes / 0 for No): ";
        cin >> choice;
    }

    displayLinkedList(); // Call the function to display the list
}

void displayLinkedList()
{
    temp = head; // Start from the head of the list
    cout << "The linked list is: ";
    while (temp != nullptr)
    {
        cout << "[" << temp->data << "|" << temp->nextptr << "]" << "->";
        temp = temp->nextptr;
    }
    cout << "NULL" << endl; // End of the list
}
