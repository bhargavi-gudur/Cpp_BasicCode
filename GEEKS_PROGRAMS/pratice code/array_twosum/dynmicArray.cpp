/**
 * @file    dynmicArray.cpp
 * @author  GandlaBhargavi
 * @brief   This file is used to create an array dynamically and free the memory.
 *   
 * @version 0.1
 * @date 2025-03-11
 * 
 * @bhargavi-gudur
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void dynamicarray(); //function prototype

int main()
{
    dynamicarray(); //function call
    return 0;
}
/**
 * @brief   dynamicarray function is used to create an array dynamically and free the memory
 * 
 */
void dynamicarray()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int *arr = new int[n]; //dynamic memory allocation
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of array are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr; //free the memory
    cout<<endl;
    cout<<"Memory is freed"<<endl;
}
/** 
 * @note: The above code is used to create an array dynamically and free the memory.
 *        ,this code took help from copilot ai automated tool and modified by me.
*/
