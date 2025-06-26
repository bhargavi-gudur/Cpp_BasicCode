/**
 * @file set.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of the set container in C++.
 * Sets are collections of unique elements, and this program shows how to insert,
 * @version 0.2
 * @date 2025-05-21
 * 
 */
#include <iostream>
#include <set>
#include <vector>

using namespace std;

/**
 * @brief This function demonstrates the use of a set in C++.
 * @details It initializes a set of integers, performs insertion and deletion operations,
 * and displays the contents of the set.
 */
void set_fun()
{
    set<int> set_value = {100, 30, 60, 67, 90, 67};
    cout << " before size = " << set_value.size() << endl;
    set_value.insert(89);
    set_value.insert(89);
    cout << " after size = " << set_value.size() << endl;

    cout << "print  the set value :" << " ";
    for (auto val : set_value)
    {
        cout << "|" << val;
    }
    cout << endl;
    auto it = set_value.erase(set_value.find(100));
    cout << "erase : " << *it << endl;

    cout << "after erase print  the set value :" << " ";
    for (auto val : set_value)
    {
        cout << "|" << val;
    }
}
/**
 * @brief main function calling the set function.
 * @details This function initializes a set of integers,
 * performs insertion and deletion operations, and displays the contents of the set.
 * 
 * @return int
 */
int main()
{
    set_fun();
    return 0;
}