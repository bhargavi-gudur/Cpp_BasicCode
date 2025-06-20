/**
 * @file circularLinkedList.cpp
 * @author Gandla Bhargavi
 * @brief   This file demonstrates the creation and traversal
 * of a simple circular linked list in C++.
 * @version 0.1
 * @date 2025-06-20
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

// Using standard namespace for convenience
using  std::cout;
using  std::endl;
using  std::cin;

/**
 * @brief  Node class representing each element in the circular linked list.
 * It contains data and a pointer to the next node.
 */
class Node
{
public:
    int data;
    Node *next;
    void circularLinkedList()
    {
        Node *head, *middle, *last;

        head = new Node();
        middle = new Node();
        last = new Node();

        head->data = 10;
        middle->data = 20;
        last->data = 30;

        head->next = middle;
        middle->next = last;
        last->next = head;

        cout << "Circular LinkedList Elements Are:" << endl;

        Node *temp = head;
        do
        {
            cout << temp->data << endl;
            temp = temp->next;
        } while (temp != head);
    }
};

/**
 * @brief  Main function to execute the circular linked list creation and traversal.
 *
 * @return int
 */
int main()
{
   Node  circularLinkedListObj;
   circularLinkedListObj.circularLinkedList();

   return 0;
}