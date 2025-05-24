/**
 * @file linkedlist_basic.cpp
 * @brief Singly linked list to create the data and address to access in a linear way.
 * @version 0.1
 * @date 2025-04-06
 */

#include <iostream>
using namespace std;

/**
 * @brief Struct node to represent each element in the linked list
 */
class node
{
public:
    int data;
    node *nextptr;

    void display_linklist(node *n)
    {
        while (n)
        {
            cout << n->data << "->" << n->nextptr << " | ";
            n = n->nextptr;
        }
        cout << endl;
    }
};

/**
 * @brief Main function
 * @return int
 */
int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 14;
    head->nextptr = second;
    second->data = 78;
    second->nextptr = third;
    third->data = 58;
    third->nextptr = nullptr;

    node objnode;
    cout << "Linked list created successfully." << endl;
    objnode.display_linklist(head);

    delete head;
    delete second;
    delete third;

    head = nullptr;
    second = nullptr;
    third = nullptr;
    cout << "Memory freed successfully." << endl;

    return 0;
}
