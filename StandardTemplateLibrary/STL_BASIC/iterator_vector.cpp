/**
 * @file iterator_vector.cpp
 * @author Gandla Bhargavi
 * @brief  this program demostrates how to use iterators to traverse 
 * a vector in C++.
 * This program initializes a vector with some integers and then uses
 *  an iterator to print each element.
 * @version 0.1
 * @date 2025-09-05
 * 
 */
#include<iostream>
#include<vector>
using namespace std;

class vector_iterator
{
    private:
        vector<int> classVector;
 
    public:
        vector_iterator(const vector<int>& vec) : classVector(vec) {}

        void print() const 
        {
            vector<int>::const_iterator it;
            for (it = classVector.begin(); it != classVector.end(); ++it)
            {
                cout << *it << " | ";
            }
            cout << endl;
        }
};
/**
 * @brief Prints the elements of a vector.
 * 
 * @param vec The vector to print.
 * 
 */
void printVector(const vector<int>& vec) 
{
    vector<int>::const_iterator it;
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
/**
 * @brief This program demonstrates how to use iterators to traverse a vector in C++.
 * 
 * It initializes a vector with some integers and then uses an iterator to print each element.
 * 
 * @return int 
 */
int main()
{
    cout << "Using iterator to print vector elements:" << endl;
    vector<int> vec = {1, 2, 3, 4, 5};
    printVector(vec);
    cout << "Using class with iterator to print vector elements:" << endl;
    vector_iterator vecIter(vec);
    vecIter.print();
    return 0;
}