/**
 * @file vowelorconsonant.c
 * @author Gandla Bhargavi
 * @brief  this program demostrate to find vowel and consonant,
 *  display on the screen.
 * @version 0.1
 * @date 2024-11-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>
#include <ctype.h>

void vowelorconsonant_fun(); // function declaration
/**
 * @brief  main function
 *
 * @return int
 */
int main()
{
    vowelorconsonant_fun(); // function calling
    return 0;
}

/**
 * @brief
 *
 */
void vowelorconsonant_fun() // function defintion
{
    char vowel_const;
    printf("enter the character to find vowel or consonant :\n");
    scanf("%c", &vowel_const);

    if (isalpha(vowel_const))
    {
        if (vowel_const == 'a' || vowel_const == 'e' || vowel_const == 'i' || vowel_const == 'o', vowel_const == 'u')
        {
            printf("lower case vowel %d: %c\n", vowel_const, vowel_const);
        }
        else if (vowel_const == 'A' || vowel_const == 'E' || vowel_const == 'I' || vowel_const == 'O', vowel_const == 'U')
        {
            printf("upper case vowel %d : %c\n", vowel_const, vowel_const);
        }
        else if (islower(vowel_const))
        {
            printf("lower case consonant  %d :%c\n", vowel_const, vowel_const);
        }
        else
        {
            printf("upper case consonant  %d :%c\n", vowel_const, vowel_const);
        }
    }
    else
    {
        printf(" the value is numeric number :%d", vowel_const);
    }
}