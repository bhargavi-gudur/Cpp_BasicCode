/**
 * @file average_array.cpp
 * @author Gandla bhargavi
 * @brief  This program defines a class `Cal_average_sum` that calculates the average
 *  and sum of an array of integers. 
 * @version 0.1
 * @date 2026-05-18
 * 
 */

 #include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

/**
 * @brief  Class to calculate the average and sum of an array of integers
 * This class takes a vector of integers as input, calculates the sum and 
 * average, and displays the results. 
 * The constructor initializes the array and performs the calculations, 
 * while the destructor is not explicitly defined as there are no dynamic resources to manage.
 * 
 */
class Cal_average_sum
{
    private:
    vector<int> arr;
    public:
        Cal_average_sum(vector<int> arr):arr(arr){
            int sum = 0;
            int avg = 0;
            int n = arr.size();
            for(auto i:arr)
            {
                sum+=i;
            }
            avg = sum/n;
            cout<<"Sum: "<<sum<<endl;
            cout<<"Average: "<<avg<<endl;
        }

};
/**
 * @brief  Main function to execute the program    
 * 
 * @return int 
 */
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Cal_average_sum obj(arr);
    return 0;
}