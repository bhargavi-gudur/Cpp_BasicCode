/**
 * @file Natural_numbers.cpp
 * @author gandla bhargavi
 * @brief  This program defines a class `SumOfNaturalNum` that calculates
 * the sum of the first `n` natural numbers.
 *
 * @version 0.1
 * @date 2026-04-30
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief  The `SumOfNaturalNum` class has a constructor that initializes
 * the number of natural numbers to be summed and a member function `sumofN_naturalNum()`
 * that calculates and prints the sum of the first `n` natural numbers.
 *
 * The member function uses a loop to iterate through the natural numbers,
 * accumulating the sum and printing the intermediate sums for each natural number.
 *
 */
class SumOfNaturalNum
{
private:
    int number;
    int sum = 0;

public:
    /**
     * @brief Construct a new Sum Of Natural Num object
     * This constructor initializes the `number` of natural numbers
     *  to be summed and the initial `sum` value.
     *
     * @param num
     * @param sum_nat_num
     */

    SumOfNaturalNum(int num, int sum_nat_num) : number(num), sum(sum_nat_num) {}

    /**
     * @brief Calculates and prints the sum of the first `n` natural numbers
     *
     */
    void sumofN_naturalNum()
    {

        for (int i = 1; i <= number; i++)
        {
            sum += i;
            cout << i << "->" << sum << " , ";
        }
        cout << endl;
        cout << "total Sum of the natural number  = " << sum;
    }
    // destructor
    ~SumOfNaturalNum() {}
};
/**
 * @brief The `main` function prompts the user to enter a positive integer `n`, 
 * creates an instance of the `SumOfNaturalNum` class, and calls the `sumofN_naturalNum()` 
 * member function to calculate and display the sum of the first `n` natural numbers.
 *  If the user enters an invalid number (non-positive), it displays an error message.  
 * 
 * @return int
 */
int main()
{
    int n;
    cout << "enter the number:" << endl;
    cin >> n;
    if (n > 0)
    {
        SumOfNaturalNum objSumOfNaturalNum(n, 0);
        objSumOfNaturalNum.sumofN_naturalNum();
    }
    else
    {
        cout << "invalid number! enter greater than zero and positive number....." << endl;
    }
    return 0;
}
