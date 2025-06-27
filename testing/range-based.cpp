/**
 * @file    range-based.cpp
 * @author  Gandla Bhargavi
 * @brief   Demonstrates use of standard and range-based for loops, with char-based loop control.
 * @version 2.0
 * @date    2025-06-27
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief Demonstrates a standard for loop with continue and break
 */
void arraydata()
{
    int arr_data[] = {1, 10, -1, 5, 6, -1, 7, -99, 8, 10};
    int size = sizeof(arr_data) / sizeof(arr_data[0]);

    for (int i = 0; i < size; i++)
    {
        if (arr_data[i] == -1)
        {
            continue;
        }
        else if (arr_data[i] == -99)
        {
            break;
        }
        cout << "index: " << i << ", data: " << arr_data[i] << endl;
    }
}

/**
 * @brief Demonstrates a range-based for loop with continue and break
 */
void arraydata_rangeforloop()
{
    int arr_data[] = {1, 10, -1, 5, 6, -1, 7, -99, 8, 10};
    cout << "data: ";
    for (int data : arr_data)
    {
        if (data == -1)
        {
            continue;
        }
        else if (data == -99)
        {
            break;
        }
        cout << data << ", ";
    }
    cout << endl;
}
/**
 * @brief  Main function to demonstrate loop styles.
 * This function allows the user to choose between a standard 
 * for loop and a range-based for loop.
 * 
 * @return int 
 */
int main()
{
    int choice;
    char ch;

    do
    {
        cout << "\nChoose a loop style (1 or 2):" << endl;
        cout << "1. Standard for loop" << endl;
        cout << "2. Range-based for loop" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        // Check if the input is valid
        if (cin.fail())
        {
            cin.clear();            // Clear the error flag
            cin.ignore(1000, '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number (1 or 2)." << endl;
            continue; // Go back to loop
        }

        switch (choice)
        {
        case 1:
            arraydata();
            break;
        case 2:
            arraydata_rangeforloop();
            break;
        default:
            cout << "Invalid choice. Please choose either 1 or 2." << endl;
            break;
        }

        cout << "\nEnter 'N' or 'n' to exit, any other character to continue: ";
        cin >> ch;

        if (ch == 'N' || ch == 'n')
        {
            cout << "Exiting the loop. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Loop continues because you entered '" << ch << "'." << endl;
        }

    } while (true);

    return 0;
}
