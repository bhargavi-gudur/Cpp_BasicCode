/**
 * @file ValidParentheses.cpp
 * @author Gandla Bhargavi
 * @brief Program to check if a string of brackets is valid.
 *
 * The string is valid if:
 *  1. Every opening bracket has a matching closing bracket of the same type.
 *  2. Brackets close in the correct order.
 *
 * Example:
 *   Input : "({[]})"
 *   Output: true
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
 *
 * @version 0.1
 * @date 2025-09-30
 */

#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>
using namespace std;

/**
 * @brief Checks if a string of brackets is valid.
 *
 * @param s Input string containing '(', ')', '{', '}', '[' , ']'
 * @return true if valid
 * @return false if invalid
 */
bool isValid(string s) {
    unordered_map<char, char> match = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    stack<char> st;

    for (char c : s) {
        // If it's an opening bracket → push to stack
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            // Closing bracket → check if stack top matches
            if (st.empty() || st.top() != match[c]) {
                return false;
            }
            st.pop();
        }
    }
    // Valid if stack is empty at the end
    return st.empty();
}

/**
 * @brief Main function to test the bracket validation.
 */
int main() {
    string input = "({[]})";
    cout << (isValid(input) ? "true" : "false") << "\n";
    return 0;
}