/** *
 * @file vowel_consonant.cpp
 * @author gandla bhargavi
 * @brief This program determines if a character is a vowel or consonant.
 * using  object-oriented programming concepts in C++.
 *
 * The program defines a class `Check_Vowel_Consonant` that takes a character
 * as input and checks if it is a vowel (both lowercase and uppercase) or a consonant.
 *
 * @date 2023-04-30
 *
 */

#include <iostream>
#include <vector>

// this namespace is used to avoid writing std:: library before every cin, cout, vector etc.
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Check_Vowel_Consonant
{
private:
    char c;
    bool isLowercaseVowel, isUppercaseVowel;
    //  bool isvowel;

public:
    /** @brief Constructor that initializes the character and checks if it is a vowel
     *
     * @param find_char The character to check
     */
    Check_Vowel_Consonant(char find_char) : c(find_char)
    {
        // evaluates to 1 (true) if c is a lowercase vowel
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

        // evaluates to 1 (true) if c is an uppercase vowel
        isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
        // char lower = std::tolower(c);
        //   isVowel = (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
    }

    /** @brief Function to check if the character is a vowel or consonant
     *
     * @param find_char The character to check
     */
    void isvowel_constant()
    {
        // bool isLowercaseVowel, isUppercaseVowel;

        if (!isalpha(c))
            printf("Error! Non-alphabetic character.");
        else if (isLowercaseVowel || isUppercaseVowel)
            cout << c << " is a vowel.";
        else
            cout << c << " is a consonant.";
    }
    /**
     * @brief Destroy the Check_Vowel_Consonant object .
     *
     */
    ~Check_Vowel_Consonant()
    {
        cout << c << " destructor called " << endl;
    }
};
/** @brief The main function to run the program.
 * It prompts the user to enter an alphabet and checks if it is a vowel or consonant.
 *
 * if user enter '0' it stops the input and then creates an instance of the
 * Check_Vowel_Consonant class, passing the vector of characters to it.
 *
 * @return 0 indicating successful execution.
 */
int main()
{
    vector<char> char_vec;
    char c_in_alpha;
    cout << "Enter an alphabet: ";

    while (true)
    {
        cin >> c_in_alpha;
        if (c_in_alpha == '0')
            break; // stop input
        char_vec.emplace_back(c_in_alpha);
    }
    for (auto c_out_alpha : char_vec)
    {
        Check_Vowel_Consonant objCheck_Vowel_Consonant(c_out_alpha);
        objCheck_Vowel_Consonant.isvowel_constant();
    }
}

/**
 * time complexity : O(n) where n is the number of characters in the vector,
 *  as we need to iterate through each character once to determine if it's a vowel or consonant.
 * space complexity: O(n) where n is the number of characters in the vector,
 * as we need to store the characters in a vector before processing them.
 *
 */