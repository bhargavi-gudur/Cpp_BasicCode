/**
 * @file list_iterator.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of list iterators in C++.
 *         It includes a class that populates a list with user input and displays the contents.
 * @version 0.1
 * @date 2025-04-04
 * 
 */

#include <iostream>
#include <list>

using namespace std;
extern "C" void list_iterator();

/**
 * @brief  This class contains a list and methods to populate and display it.
 * 
 */
class list_class
{
public:
    list<int> list_var;
    void populate_list()
    {
        int n;
        for (int i = 0; i < 5; i++)
        {
            cin >> n;
            list_var.push_back(n);
        }
    }
    void display_list() 
    {
        cout << "List contents: ";
        for (int val : list_var)
        {
            cout << val << " ";
        }
        cout << endl;
    }
};
/**
 * @brief  This is the main function that creates an object of the list_class,
 * populates the list with user input, and displays the contents.
 * 
 * @return int 
 */
int main()
{
    list_class objlist_class;
    // Populate the list
    objlist_class.populate_list();

    // Display the list
    objlist_class.display_list();
    list_iterator();
    return 0;
}
/**
 * @brief  This function demonstrates the use of list iterators in C++.
 * 
 */
void list_iterator()
{
    list<int> list_var;
    int n;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        list_var.push_back(n);
    }
    for (list<int>::iterator it = list_var.begin(); it != list_var.end(); it++)
    {
        cout << "*it : " << *it << " | ";
    }
    cout << endl;
}