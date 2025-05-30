/**
 * @file lists_creatElement.cpp
 * @author Gandla Bhargavi
 * @brief Creating list of different data types.
 * @details This program demonstrates how to create a list of different
 *  data types using C++ STL.
 * @version 0.1
 * @date 2025-05-30
 *
 */
#include <iostream>
#include <vector>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::vector;
template <class DT>
/**
 * @brief  Function to create list of different data types.
 * 
 * @tparam DT 
 */
void list_create()
{
    //list<DT> list_var = {23.08, 45.56, 56.78, 78.45, 67.12};
    list<DT> list_var = {23, 45, 56, 78, 67};
    for (auto lists : list_var)
    {
        cout << lists << " -> ";
    }

    cout << " end " << endl;
}
/**
 * @brief  Main function to create list of different data types.
 *  
 * 
 * @return int 
 */
int main()
{
    list_create<double>();
    list_create<float>();
    list_create<int>();
    list_create<char>();

    return 0;
}