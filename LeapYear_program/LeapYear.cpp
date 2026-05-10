/**
 * @file LeapYear.cpp
 * @author Gandla Bhargavi
 * @brief    This program defines a class called leapyear that calculates
 *  and stores leap years up to a specified year.
 * @version 0.1
 * @date 2026-05-10
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>
#include <vector>

//using because no need to write std:: before every standard library object or function
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/**
 * @brief  The leapyear class is designed to determine and store leap years up to a specified year.
 * The class has a private member variable leap_years, which is a vector that holds the leap years,
 *  and an integer year that represents the upper limit for finding leap years. 
 */
class leapyear
{
private:
    vector<int> leap_years;
    int year;

public:
    leapyear(int whichyear) : year(whichyear)
    {
        for (int i = 1; i <= year; i++)
        {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            {
                leap_years.push_back(i);
            }
        }
    }
    void display()
    {
        int size = leap_years.size();
        int count = 0;
        cout << "Leap years from 1 to " << year << " are: " << endl;
        for(auto i:leap_years)
        {
            cout << i << " ";
            count++;
          
        }
        cout << endl;
        cout << "Total number of leap years from 1 to " << year << " is: " << count << endl;
    }
    ~leapyear()
    {
        leap_years.clear();
    }
};

/**
 * @brief  The main function prompts the user to enter a year and then creates 
 * an instance of the leapyear class, passing the entered year as an argument. 
 * It then calls the display method to show all the leap years from 1 to the entered year. 
 * Finally, it returns 0 to indicate successful execution.
 * 
 * @return int 
 */

int main()
{
    int year_leapornot;
    cout << "Enter the year up to which you want to find leap years: "<<endl;

    cin >> year_leapornot;
    leapyear leap(year_leapornot);
    leap.display();
    return 0;
}
