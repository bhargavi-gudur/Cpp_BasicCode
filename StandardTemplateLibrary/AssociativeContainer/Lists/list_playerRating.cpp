/**
 * @file list_playerRating.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of lists in C++ to categorize players based on their ratings.
 * The program uses the Standard Template Library (STL) to manage a list of player ratings and categorize them into beginners and pros.
 * @version 0.1
 * @date 2025-05-29
 *
 */
#include <iostream>
#include <list>
using namespace std;
/**
 * @brief Function prototypes
 * LIST_FUN: Function to create a list of player ratings.
 * rating: Function to categorize players into beginners and pros based on their ratings.
 * display: Function to display the categorized players.
 */
extern "C"
{
    void LIST_FUN();
    void rating();
    void display();
};
/**
 * @brief Global variables
 * allplayers: List of player ratings.
 * beginners: List to store beginner players.
 * pros: List to store pro players.
 * it: Iterator for traversing the lists.
 */
list<int> allplayers = {2, 3, 5, 6, 8, 9, 4, 1, 4, 7, 4, 8, 5};
list<int> beginners;
list<int> pros;
list<int>::iterator it;
/**
 * @brief Main function
 * Calls the LIST_FUN, rating, and display functions to demonstrate the functionality.
 * @return int
 */
int main()
{
    LIST_FUN();
    rating();
    display();
    return 0;
}
/**
 * @brief Function to create a list of player ratings.
 * The function prompts the user to enter player ratings and stores them in a list.
 * It then removes the first element from the list and displays the remaining elements.
 */
void LIST_FUN()
{
    list<int> mylist;
    int n;
    cout << "enter the list:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        mylist.push_front(n);
    }
    list<int>::iterator it;
    mylist.erase(mylist.begin());
    for (it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << "->" << *it << " | ";
    }
    cout << endl;
}
/**
 * @brief Function to categorize players into beginners and pros based on their ratings.
 * The function iterates through the allplayers list and categorizes players based on their ratings.
 * Players with ratings 1-5 are categorized as beginners, and those with ratings 6-10 are categorized as pros.
 */
void rating()
{

    for (it = allplayers.begin(); it != allplayers.end(); it++)
    {
        int ratingPlayer = *it;
        if (ratingPlayer >= 1 && ratingPlayer <= 5)
        {
            beginners.push_back(ratingPlayer);
        }
        if (ratingPlayer >= 6 && ratingPlayer <= 10)
        {
            pros.push_back(ratingPlayer);
        }
    }
}
/**
 * @brief Function to display the categorized players.
 * The function calls the rating function to categorize players and then displays the beginners and pros lists.
 */
void display()
{
    rating(); // Categorize players

    cout << "Beginners: ";
    for (it = beginners.begin(); it != beginners.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "Pros: ";
    for (it = pros.begin(); it != pros.end(); it++)
        cout << *it << " ";
    cout << endl;
}
