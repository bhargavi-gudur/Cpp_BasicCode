/**
 * @file do-whileloop.cpp
 * @author Gandla Bhargavi
 * @brief  to demostrate do while program in c++ .
 * @version 0.1
 * @date 2025-03-19
 *  
 */

 #include<iostream>

using std::cin;
using std::cout;
using std ::endl;
//declaration of the function 
void dowhileFunction();
/**
 * @brief  main function to call the function.
 * 
 * @return int 
 */
int main()
{
    dowhileFunction();
    return 0;
}
/**
 * @brief  function to demonstrate do while loop.   
 * 
 */
void dowhileFunction()
{
    int sum = 0;
    int i = 1;
    int num;
    cout << "enter the number " << endl;
    cin >> num;
    do{
        cout << " addition in loop number :" <<i<< endl;
             
        sum += i;
        i++;
    } while (i <= num);
  
    cout << "final sum :" << sum << endl;
    
}