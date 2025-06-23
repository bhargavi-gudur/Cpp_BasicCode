/**
 * @file vectors_pairs.cpp
 * @author Gandla Bhargavi
 * @brief This file demonstrates the use of STL vectors and pairs.
 *  It includes functions to create vectors of different
 *  data types and a vector of pairs.
 * @version 0.1
 * @date 2025-06-23
 *
 */
#include <iostream>
#include <vector>
#include <utility>

// Using standard namespace components for convenience
using std::cin;
using std::cout;
using std::endl;
using std::make_pair;
using std::pair;
using std::string;
using std::vector;

/**
 * @brief  This function creates a vector of a specified data type and prints its elements.
 * @tparam DT The data type of the vector elements.
 */
template <class DT>

/**
 * @brief  This function demonstrates the use of STL vectors.
 * It creates a vector of a specified data type and prints its elements.
 */
void vector_fun()
{
    vector<DT> v1;
    int num_elements;
    cout << "Enter the number of elements in the vector: " << endl;
    cin >> num_elements;
    for (size_t i = 0; i < num_elements; i++)
    {
        DT value;
        // cout << "Enter the value for element " << i + 1 << ": ";
        cin >> value;
        v1.push_back(value);
    }
    for (auto vector_value : v1)
    {
        cout << vector_value << " | ";
    }
    cout << endl;
}

/**
 * @brief  This function demonstrates the use of STL pairs.
 * It creates a vector of pairs and prints its elements.
 */
void pair_vector()
{
    vector<pair<int, string>> empDetails = {{36939, "bhargavi"}, {36930, "payal"}};

    for (int i = 0; i < empDetails.size(); i++)
    {
        cout << empDetails[i].first << " | " << empDetails[i].second << endl;
    }
    cout << "Adding new employee details to the vector" << endl;
    empDetails.push_back({36900, "geetha"});
    for (int i = 0; i < empDetails.size(); i++)
    {
        cout << empDetails[i].first << " | " << empDetails[i].second << endl;
    }
}

/**
 * @brief  This function demonstrates the use of STL vectors and pairs.
 * It includes functions to create vectors of different
 * data types and a vector of pairs.
 * @return int
 */
int main()
{
    cout << "using vector float data type" << endl;
    vector_fun<float>();
    cout << "using vector  int data type" << endl;
    vector_fun<int>();
    cout << "demostrating vector of pairs" << endl;
    pair_vector();
    return 0;
}