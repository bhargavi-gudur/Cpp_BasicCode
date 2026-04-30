/**
 * @file largestnumber_inbuilt.cpp
 * @author gandla bhargavi
 * @brief  This program defines a class `Largest_number_inbuilt` that takes three
 * integers as input and determines the largest among them using the `std::max`
 * function from the `<algorithm>` library.
 * @version 0.1
 * @date 2026-04-29
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>
#include <algorithm> // std::max

using std::cin;
using std::cout;
using std::endl;
using std ::max;
using std::cerr;

class Largest_number_inbuilt
{
    int num1, num2, num3;

public:
    Largest_number_inbuilt(int n1 = 0, int n2 = 0, int n3 = 0)
        : num1(n1), num2(n2), num3(n3) {}

    // Returns the largest of the three numbers using std::max
    int find_largest() const
    {
        return max(num1, max(num2, num3));
    }
};

int main()
{
    int a, b, c;
    cout << "Enter three integers: ";
    if (!(cin >> a >> b >> c))
    {
        cerr << "Invalid input. Please enter three integers.\n";
        return 1;
    }

    Largest_number_inbuilt finder(a, b, c);
    cout << "Largest number: " << finder.find_largest() << '\n';
    return 0;
}
