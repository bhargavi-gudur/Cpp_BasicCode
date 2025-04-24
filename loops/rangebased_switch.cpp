/**
 * @file rangebased_switch.cpp
 * @author GandlaBhargavi
 * @brief to demonstrate range based for loop.
 * @details  this program will take user input and sum of positive numbers using do while loop.
 * @version 0.1
 * @date 2025-03-20
 *
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std ::vector;
int loop_count = 0;

/**
 * @brief function to count the loop
 *
 * @param count
 */
void countloop(int *count)
{
    cout << "count :" << (*count)++ << endl;
}
/**
 * @brief function to demonstrate range based for loop.
 *
 */
void rangeBasedForLoop()
{

    int arr[] = {1, 2, 3, 445, 56, 90};

    cout << "i-> ";
    for (int range_arr : arr) // (datatype) rangedelaration : range expression
    {
        cout << " |" << range_arr << "| ";
        countloop(&loop_count);
    }

    cout << endl;
}
/**
 * @brief function to demonstrate range based for loop.
 *
 */
void vectorRangebaseLoop()
{
    vector<int> rangeVector = {1, 56, 78, 892, 1790, 23, 455};
    cout << "i-> ";
    for (int range_arr : rangeVector) // (datatype) rangedelaration : range expression
    {
        cout << " |" << range_arr << "| ";
        countloop(&loop_count);
    }

    cout << endl;
}
/**
 * @brief function to demonstrate range based for loop.
 *
 */
void rangeCharBasedForLoop()
{

    char arr[] = " learning code";

    cout << "char-> ";
    for (auto range_char_arr : arr) // (datatype) rangedelaration : range expression
    {
        if (range_char_arr != ' ')
            cout << " |" << range_char_arr;
        // countloop(&loop_count);
    }

    cout << endl;
}
/**
 * @brief function to demonstrate range based for loop.
 *
 */
void vectorRangebaseLoop_sum()
{
    vector<int> VectorNum = {1, 56, 78, 892, 1790, 23, 455};
    int sum = 0;
    cout << "vector based sum  -> " << endl;
    for (int range_arr : VectorNum) // (datatype) rangedelaration : range expression
    {
        sum += range_arr;
        cout << " | arr-> " << range_arr << " |sum-> " << sum << "| " << endl;
    }
}
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    int choice;
    char continue_loop;
    do
    {

        cout << "enter the choice : " << endl;
        cin >> choice;
        switch (choice)
        {

        case 1:
            rangeBasedForLoop();
            break;

        case 2:
            vectorRangebaseLoop();
            break;
        case 3:
            rangeCharBasedForLoop();
            break;
        case 4:
            vectorRangebaseLoop_sum();
            break;
        default:
            cout << " invalid choice " << endl;
            break;
        }
        cout << "do you want to  continue_loop : (y)  , outof loop (n) ?" << endl;
        cin >> continue_loop;
    } while (continue_loop != 'n' && continue_loop != 'N');

    cout << " thank you , exiting from the loop" << endl;
    return 0;
}