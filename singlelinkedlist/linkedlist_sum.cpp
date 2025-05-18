/**
 * @file linkedlist_sum.cpp
 * @author  Gandla Bhargavi
 * @brief  This program implements a singly linked list in C++.
 * It allows the user to insert nodes at the beginning and end of the list,
 * and calculates the sum of all nodes in the list.
 * The program includes functions to print the list and to calculate the sum.
 *
 * @version 0.1
 * @date 2025-04-12
 *
 */
#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node
{
    int data;   // Data of the node
    Node *next; // Pointer to the next node
};

/**
 * @brief  Prints the linked list.
 *
 * @param head
 */
void printList(Node *head)
{
    Node *current = head;

    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}
/**
 * @brief  Calculates the sum of all nodes in the linked list.
 *
 * @param head
 */
void sum_linkedlist(Node *head)
{
    Node *current = head;
    int sum = 0;
    while (current != nullptr)
    {

        sum += current->data;
        current = current->next;
        cout << "\n sum linkedlist :" << sum << " ";
    }
}
/**
 * @brief   Inserts a new node at the beginning of the linked list.
 *
 * @param head
 * @param value
 * @return * void
 */
void insertAtBeginning(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

/**
 * @brief   Inserts a new node at the end of the linked list.
 *
 * @param head
 * @param value
 * @return * void
 */
void insertAtEnd(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}
/**
 * @brief  Main function to demonstrate the linked list operations.
 *
 * @return int
 */
int main()
{
    Node *head = nullptr; // Initialize an empty linked list
    int n;
    // Inserting nodes

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value to insert at begin : ";
        cin >> n;
        insertAtBeginning(head, n);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value to insert at end: ";
        cin >> n;
        insertAtEnd(head, n);
    }
    cout << "Linked List: ";
    printList(head);
    sum_linkedlist(head);

    return 0;
}
