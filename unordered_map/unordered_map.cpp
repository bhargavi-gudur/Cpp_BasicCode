/**
 * @file unordered_map.cpp
 * @author Gandla Bhargavi
 * @brief Demonstrates the use of unordered_map to manage and
 *  display cumulative sums of numbers.
 * @version 0.1
 * @date 2024-10-28
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;
/**
 * @brief class of unordered_map
 *
 */
class unorder_map
{
private:
    int cumlative_sum = 0, n;
    unordered_map<int, pair<int, int>> sum;

public:
    unorder_map() {}
    void display();
    ~unorder_map() {}
};

/**
 * @brief display the unorder_map values .
 *
 */
void unorder_map ::display()
{
    cout << "enter the value n:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cumlative_sum += i;
        sum[i] = make_pair(i, cumlative_sum);
    }
    for (const auto &pair : sum)
    {
        cout << "pair.first :" << pair.first << " "<<"pair.second : "
             << pair.second.second << " "<<endl;
        
    }
    cout << "cumlative or total sum " << cumlative_sum << endl;
}
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    unorder_map obj_unorder_map;
    obj_unorder_map.display();
    return 0;
}
