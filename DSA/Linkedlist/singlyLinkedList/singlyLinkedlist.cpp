/**
 * @file singlyLinkedlist.cpp
 * @author Gandla bhargavi
 * @brief  This file demonstrates the creation and traversal
 * of a simple singly linked list in C++.
 * @version 0.2
 * @date 2025-06-11
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
using namespace std;

/**
 * @brief  Node structure for a singly linked list.
 *
 */
class node
{
public:
    int data;
    node *next_ptr;

    // **Parameterized Constructor**
    node(int val)
    {
        data = val;
        next_ptr = nullptr;
    }
};

/**
 * @brief Function to create a simple linked list with three nodes,
 * link them together, and traverse the list to print the node
 * addresses and values.
 */
void createLinkedList()
{
    // **Passing values when creating nodes**
    node *head = new node(88);
    node *middle = new node(45);
    node *last = new node(90);

    head->next_ptr = middle;
    middle->next_ptr = last;

    // **Traversing & printing**
    node *temp = head;
    while (temp != nullptr)
    {
        cout << "Node Address: " << temp << ", Data: " << temp->data << endl;
        temp = temp->next_ptr;
    }

    if (head && head->next_ptr && head->next_ptr->next_ptr)
    {
        cout << "Check the address: " << head->next_ptr->next_ptr << endl;
        cout << "Check the value: " << head->next_ptr->next_ptr->data << endl;
    }
    else
    {
        cout << "Error: Null pointer detected!" << endl;
    }
    // **Free allocated memory**
    delete head;
    head = nullptr;
    delete middle;
    middle = nullptr;
    delete last;
    last = nullptr;
}

/**
 * @brief  Main function to execute the linked list creation and traversal.
 *
 * @return int
 */
int main()
{
    createLinkedList();
    return 0;
}
