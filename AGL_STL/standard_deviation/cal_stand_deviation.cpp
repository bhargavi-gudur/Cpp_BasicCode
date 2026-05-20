/**
 * @file cal_stand_deviation.cpp
 * @author Gandla bhargavi
 * @brief  This program calculates the variance and standard deviation of a 
 * set of numbers entered by the user.
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */

 #include<iostream>
 #include<vector>
 #include<cmath>

 //using name space std:: not recommended as it may cause name conflicts, 
 //so we will use specific names from the std namespace.
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sqrt;
using std::pow;

/**
 * @brief  This program calculates the variance and standard deviation 
 * of a set of numbers entered by the user.
 * 
 */
class standard_deviation
{
    private:
        vector<float> numbers;
        float value;

    public:
    /**
     * @brief Construct a new standard deviation object
     * 
     * @param s 
     */
        standard_deviation( int s):value(n)
        {
            cout<<"Enter the numbers for variance: "<<endl;
            for (auto i = 0; i < s;i++)
            {
                cin >> value;
                numbers.emplace_back(value);
            }
        }
        /**
         * @brief  This function calculates the variance and standard deviation
         *  of the numbers entered by the user.
         * 
         */
        virtual void calculationVariance() = 0;
        {
         
            float sum=0.0, mean, variance = 0.0;
            size_t   size = numbers.size();
            for(auto i:numbers)
            {
                sum += i;
            }
            mean = sum / size;
            for(auto i:numbers)           
             {
                variance += pow((i - mean) ,2);
            }
            variance /= size;
            cout << "Variance: " << variance << endl;
            cout << "Standard Deviation: " << sqrt(variance) << endl;
        }
        ~standard_deviation(){}
};
/**
 * @brief  This class calculates the variance and standard deviation
 * of a set of numbers.
 * 
 */
class  variance:public standard_deviation
{
    public:
        variance(int s):standard_deviation(s){}
        void calculationVariance() override
        {
            standard_deviation::calculationVariance();
        }
        ~variance(){}
};

/**
 * @brief  The main function of the program.
 * 
 * @return int 
 */

int main
{

    int size = 0;
    cout << "Enter the size of the numbers: " << endl;
    cin >> size;
    variance  obj_variance(size);
    obj_variance.calculationVariance();
    return 0;
}
