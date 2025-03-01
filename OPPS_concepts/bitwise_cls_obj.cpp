/**
 * @file bitwise_cls_obj.cpp
 * @author Gandla Bhargavi
 * @brief  Bitwise operations using extern "C" and class and object.
 * @version 0.1
 * @date 2025-02-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;
extern "C"
{
    void bitwise_operation(int *num);
}
/**
 * @brief Bitwise class
 * 
 */
class bitwise
{
public:
    int *num;
    void bitwise_operation(int *num)
    {
        int and_result = (*num) & 6; // 1100 & 0110 = 0100 (4)
        cout << "Bitwise AND with 6 : " << and_result << endl;
        int shift_left_result = (*num) << 2; // 1100 << 2 = 110000 (48)
        cout << "Bitwise Shift Left by 2: " << shift_left_result << endl;
        int shift_right_result = (*num) >> 2; // 1100  >> 2 = 0011 (3)
        cout << "Bitwise Shift Right by 2: " << shift_right_result << endl;
    }
    ~bitwise() {}
};
/**
 * @brief  Main function
 * 
 * @return int 
 */
int main()
{
    int value = 12;
    cout << "----------------extern c style------------" << endl;
    bitwise_operation(&value);
    cout << "--------------- class and obj ------------" << endl;
    bitwise objbitwise;
    objbitwise.bitwise_operation(&value);
    cout << "------------------------------------------" << endl;
}
/**
 * @brief  Bitwise operations using extern "C".
 * 
 * @param num 
 */
void bitwise_operation(int *num)
{
    int and_result = (*num) & 6; // 1100 & 0110 = 0100 (4)
    cout << "Bitwise AND with 6 : " << and_result << endl;
    int shift_left_result = (*num) << 2; // 1100 << 2 = 110000 (48)
    cout << "Bitwise Shift Left by 2: " << shift_left_result << endl;
    int shift_right_result = (*num) >> 2; // 1100  >> 2 = 0011 (3)
    cout << "Bitwise Shift Right by 2: " << shift_right_result << endl;
}
