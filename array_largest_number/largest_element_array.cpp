/**
 * @file largest_element_array.cpp
 * @author Gandla Bhargavi
 *
 * @brief Program to find the largest element in an array using a class.
 *        User enters number of elements and their values.
 * @version 0.1
 * @date 2026-05-06
 */

#include <iostream>
#include <vector>

// Using declarations for convenience and to avoid prefixing std:: everywhere
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/**
 * @brief  The LargestElement class encapsulates the functionality to
 *  read an array of integers and find the largest element.
 * 
 */
class LargestElement
{
private:
    vector<int> arr;

public:
    // Constructor to read array elements
    LargestElement(int n)
    {
        arr.resize(n);
        for (int i = 0; i < n; i++)
        {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    // Function to find largest element
    int findLargest() const
    {
        int largest = arr[0];
       
        for (auto i : arr)
        {
            if (arr[i] > largest)
                largest = arr[i];
        }
        return largest;
    }

    ~LargestElement()
    {
        cout << "Destructor called." << endl;
    }
};
/** @brief  The main function prompts the user to enter the number of elements and their values,
 *  and then finds and displays the largest element in the array.
 * 
 * @return int 
 */
int main()
{
    int n;
    cout << "Enter total number of elements (1 to 100): ";
    cin >> n;

    if (n <= 0 || n > 100)
    {
        cout << "Invalid size. Please enter between 1 and 100." << endl;
        return 1;
    }

    LargestElement le(n);
    cout << "Largest element = " << le.findLargest() << endl;

    return 0;
}
