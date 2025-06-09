/**
 * @file queue_dailyrotuine.cpp
 * @author Gandla Bhargavi
 * @brief   This program demonstrates the use of a queue to manage a daily routine.
 *          It uses a queue to store tasks with their corresponding times and displays them in order.
 * @version 0.1
 * @date 2025-05-26
 *
 */
#include <iostream>
#include <string>
#include <queue>
using namespace std;

/**
 * @brief Displays the daily routine tasks from the queue.
 *
 * @param dailyTasks
 */
void display_dailyrotuine(queue<pair<string, string>> dailyTasks)
{
    while (!dailyTasks.empty())
    {
        cout << dailyTasks.front().second << " - " << dailyTasks.front().first << endl;
        dailyTasks.pop(); // Removes the first task
    }
}
/**
 * @brief Queues daily tasks for a daily routine and displays them.
 *
 */
void queue_dailytask()
{
    queue<pair<string, string>> dailyTasks_enter;
    dailyTasks_enter.push({"Wake Up", "7:00 AM"});
    dailyTasks_enter.push({"Breakfast", "7:30 AM"});
    dailyTasks_enter.push({"Lunch", "12:30 PM"});
    dailyTasks_enter.push({"Gym", "4:30 PM"});
    dailyTasks_enter.push({"Dinner", "7:00 PM"});
    cout << "Daily Routine:\n";
    display_dailyrotuine(dailyTasks_enter);
}
/**
 * @brief Main function to execute the daily routine task queue.
 *
 * @return int
 */
int main()
{
    queue_dailytask();
    return 0;
}