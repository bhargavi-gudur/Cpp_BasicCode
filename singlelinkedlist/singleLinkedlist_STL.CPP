/**
 * @file singleLinkedlist_STL.CPP
 * @author GandlaBhargavi
 * @brief  This file contains the implementation of a singly linked list using STL.
 * @version 0.1
 * @date 2025-03-26
 *
 */
#include <iostream>
#include <forward_list>

using std::cin;
using std::cout;
using std::endl;
using std::forward_list;

/* function prototypes */
void forward_linkedlist();
void reverse_linkedlist();

/**
 * @brief  This is the main function that calls the forward and reverse linked list functions.
 *
 * @return int
 */
int main()
{
    cout << "This is a singly linked list implementation using STL." << endl;
    cout << "1. Create a linked list in forward order." << endl;
    forward_linkedlist();
    cout << "2. Create a linked list in reverse order." << endl;
    reverse_linkedlist();
    return 0;
}
/**
 * @brief  This function creates a linked list in forward order.
 *
 */
void forward_linkedlist()
{
    forward_list<int> linkedlist;
    int numofnodes, value;
    cout << "Enter the number of nodes: ";
    cin >> numofnodes;
    // Insert nodes into the list
    for (int i = 0; i < numofnodes; ++i)
    {
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >> value;
        linkedlist.push_front(value);
    }
    cout << " the reverse linked list is :" << endl;
    // Print the list in reverse order
    // forward_list does not support reverse iteration, so we need to use a different approach
    for (int val : linkedlist)
    {
        cout << val << "->";
    }
    cout << "NULL" << endl;
    linkedlist.reverse(); // Reverse the list to print in forward order
    cout << "The in order linked list is: ";
    for (int val : linkedlist)
    {
        cout << val << " -> ";
    }
    cout << "NULL" << endl;
}
/**
 * @brief This function creates a linked list in reverse order.
 *
 */
void reverse_linkedlist()
{
    forward_list<int> reverselist;
    int numofnodes, value;
    cout << "Enter the number of nodes: ";
    cin >> numofnodes;
    // Insert nodes into the list in reverse order
    for (int i = 0; i < numofnodes; ++i)
    {
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >> value;
        reverselist.push_front(value);
    }
    cout << " the linked list is :" << endl;
    // Print the list in reverse order
    for (int val : reverselist)
    {
        cout << val << "->";
    }
    cout << "NULL" << endl;
}