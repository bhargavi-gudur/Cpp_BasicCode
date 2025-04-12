/**
 * @file pattern_matcher.cpp
 * @author Gandla Bhargavi
 * @brief to demostrate smaple 
 * @version 0.1
 * @date 2024-11-05
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * @brief  class type stringchecker 
 * 
 */
class StringChecker
{
private:
    string str_;

public:
    StringChecker(const string &str);
    bool isAnBn() const;
    ~StringChecker() {}
};

/**
 * @brief Construct a new String Checker:: String Checker object
 *
 * @param str
 */
StringChecker::StringChecker(const string &str) : str_(str) {}

/**
 * @brief the string value present in array are not.
 *
 * @return true
 * @return false
 */

bool StringChecker ::isAnBn() const
{
    int n = str_.length();
    int i = 0;

    while (i < n && str_[i] == 'a')
    {
        i++;
    }
    if (i * 2 != n)
    {
        return false;
    }
    while (i < n && str_[i] == 'b')
    {
        i++;
    }
    return i == n;
}
/**
 * @brief  main function
 *
 * @return int
 */
int main()
{
    string str = "aabb";
    StringChecker objchecker(str);
    cout << (objchecker.isAnBn() ? "Yes" : "No") << endl;
    return 0;
}
