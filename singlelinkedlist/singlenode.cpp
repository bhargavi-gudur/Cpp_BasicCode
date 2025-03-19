/**
 * @file singlenode.cpp
 * @author gandla bhargavi
 * @brief  this program single node created and delete  using singly linked list.
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

/*create a node one part is data  and other part is address*/
struct node
{
    int data;
    node *nextptr;

    // constructor like -intilization using inline member initializations
    node(int value) : data(value), nextptr(nullptr) {}
};
/**
 * @brief Function to create and delete a single node in a linked list.
 *
 */
void singlenode_linkedList()
{
    node *newnode = new node(42);
    
    cout << "node of the data :" << newnode->data << endl;
    cout << "node of the address pointer  :" << newnode->nextptr << endl;

    delete newnode;
    cout << "after deleting node : " << newnode->data << endl;
}
/**
 * @brief main function 
 * 
 * @return int 
 */
int main()
{
    singlenode_linkedList();
    return 0;
}