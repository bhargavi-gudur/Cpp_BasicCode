/**
 * @file enumeration.cpp
 * @author Gandla Bhargavi
 * @brief This file demonstrates the use of enumerations in C++ to represent days of the week.
 * The enum_fun function processes and prints out the days of the week.
 * @version 0.1
 * @date 2024-10-06
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#define N 7

using namespace std;
void enum_fun(); // function declaration
void convert_enum_char(); // function declaration

/**
 * @brief enumeration declaration
 *
 */
enum weekDays
{
    sun = 1,
    mon,
    tue,
    wed,
    thur,
    fri,
    sat
};
weekDays enum_var[N] =
    {sun, mon, tue, wed, thur, fri, sat};
const char *daysofweek[] =
    {"sun", "mon", "tue", "wed", "thur", "fri", "sat"};

/**
 * @brief  main function to call the enumeration calling
 *
 * @return int
 */
int main()
{
    enum_fun();
    convert_enum_char();

    return 0;
}

/**
 * @brief The enum_fun function processes and prints out the days  of the week in integer .
 *
 */
void enum_fun()
{
    int loop;
    for (loop = 0; loop < N; loop++)
    {
        enum_var[loop] = static_cast<weekDays>(enum_var[loop]);
        cout << "weekdays :" << enum_var[loop] << endl;
    }
}
/**
 * @brief  The function processes and prints out the days of the week in string .
 *
 */
void convert_enum_char()
{
    for (int i = 0; i < sat; i++)
    {
        cout << "string of the week  days : " << daysofweek[i] << endl;
    }
}
