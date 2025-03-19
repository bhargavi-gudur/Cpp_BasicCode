/**
 * @file unorderedSet.cpp
 * @author GandlaBhargavi
 * @brief unordered set is an associative container that contains
 * set of unique objects.
 * @version 0.1
 * @date 2025-03-07
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
#include <unordered_set>

using namespace std;
extern "C" void unorderSet();

/**
 * @brief class to display the unordered set.
 * 
 */
class unordered
{
private:
    unordered_set<int> unorderVal1 = {1, 2, 3, 4, 5, 6};

public:
    void display_unorderset()
    {
        for (auto x : unorderVal1)
        {
            cout << "x: " << x << " ";
        }
        cout << endl;
    }
    ~unordered() {};
};
/**
 * @brief main function to call the unordered set function.
 * 
 * @return int 
 */
int main()
{
    cout << "******* unordered set ************" << endl;
    cout << "**** unordered set cstyle ***** " << endl;
    unorderSet();
    cout << "**** unordered set c++style ******" << endl;
    unordered obj; // Create an instance of the class
    obj.display_unorderset();
    cout << "*********************************" << endl;

    return 0;
}
/**
 * @brief unordered set is an associative container that contains 
 * set of unique objects.
 * 
 */
void unorderSet()
{
    unordered_set<int> unorderVal = {1, 2, 6, 8, 9, 36};
    for (auto x : unorderVal)
    {
        cout << "x:" << x << " ";
    }
    cout << endl;
}