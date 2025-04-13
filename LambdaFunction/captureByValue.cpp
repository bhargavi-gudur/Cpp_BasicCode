/**
 * @file captureByValue.cpp
 * @author Gandla Bhargavi
 * @brief Capture by value example  using lambda function.
 * @version 0.1
 * @date 2025-03-31
 * 
 */
#include <iostream>
using namespace std;
/**
 * @brief  Capture by value example using lambda function
 * 
 */
void CaptureByValue()
{
    int x = 10;
    auto lambda = [x]()
    { cout << "capature value :" << x << endl; };
    lambda();
}
/**
 * @brief  main function  call CaptureByValue function
 * 
 * @return int 
 */
int main()
{
    CaptureByValue();
    return 0;
}
