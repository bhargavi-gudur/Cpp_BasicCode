/**
 * @file DoublyLinkedList.cpp
 * @author gandla bhargavi
 * @brief This file contains the implementation of a doubly linked list.
 * @version 0.1
 * @date 2025-06-25
 *
 */
#include <iostream>
#include <cstdlib>

// using std:: , no need to define std repeatedly
using std::cin;
using std::cout;
using std::endl;

/**
 * @brief  Class to represent a node in a doubly linked list.
 * 
 * 
 */
class Node
{

public:
    int data;
    Node *next;
    Node *prev;
    // Constructor to initialize a new node with a value
    Node(int value) : data(value), next(nullptr), prev(nullptr) {}

    /**
     * @brief  Display the values in the doubly linked list in forward direction.
     * 
     * @param start Pointer to the head of the list.
     */
    void display_forward(Node *start)
    {
        Node *current = start;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    /**
     * @brief  Display the values in the doubly linked list in backward direction.
     * 
     * @param start Pointer to the tail of the list.
     */
    void display_backward(Node *start)
    {
        Node *current = start;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }
};

/**
 * @brief  Main function to demonstrate the doubly linked list 
 * implementation.
 * 
 * @return int 
 */
int main()
{
    Node objNode_doubly_ll(0);
    Node *head = nullptr; // Initialize head pointer to null

    cout << "Doubly Linked List Implementation" << endl;
    head = new Node(10);         // Create the head node with value 10
    Node *second = new Node(20); // Create the second node with value 20
    Node *third = new Node(30);  // Create the third node with value 30

    head->next = second;
    second->prev = head;   // Set the previous pointer of the second node to head
    second->next = third;  // Set the next pointer of the second node to third
    third->prev = second;  // Set the previous pointer of the third node to second
    third->next = nullptr; // Set the next pointer of the third node to null

    // Display the values in the doubly linked list
    Node *current = head;

    objNode_doubly_ll.display_forward(head);   // Display the list in forward direction
    objNode_doubly_ll.display_backward(third); // Display the list in backward direction

    // Clean up memory
    current = head;
    while (current != nullptr)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}