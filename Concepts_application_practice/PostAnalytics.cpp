/**
 * @file PostAnalytics.cpp
 * @author Gandla Bhargavi
 * @brief Program to display analytics of a social media post (likes, comments, shares, views).
 *
 * This program simulates post analytics by storing values for likes,
 * comments, shares, and views, then displays the total insights.
 *
 * @version 0.1
 * @date 2025-10-16
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Class to represent post analytics details.
 */
class PostAnalytics {
private:
    string postTitle;
    int likes;
    int comments;
    int shares;
    int views;

public:
    // Constructor
    PostAnalytics(string title, int l, int c, int s, int v) {
        postTitle = title;
        likes = l;
        comments = c;
        shares = s;
        views = v;
    }

    /**
     * @brief Displays all analytics data.
     */
    void showAnalytics() {
        cout << "\n📊 Post Analytics Summary\n";
        cout << "----------------------------\n";
        cout << "Post Title : " << postTitle << endl;
        cout << "Likes      : " << likes << endl;
        cout << "Comments   : " << comments << endl;
        cout << "Shares     : " << shares << endl;
        cout << "Views      : " << views << endl;

        // Example of engagement rate
        float engagementRate = ((likes + comments + shares) / (float)views) * 100;
        cout << "Engagement : " << engagementRate << "%\n";
    }
};

/**
 * @brief Main function to create a post analytics object and display insights.
 */
int main() {
    string title;
    int likes, comments, shares, views;

    cout << "Enter post title: ";
    getline(cin, title);

    cout << "Enter number of likes: ";
    cin >> likes;

    cout << "Enter number of comments: ";
    cin >> comments;

    cout << "Enter number of shares: ";
    cin >> shares;

    cout << "Enter number of views: ";
    cin >> views;

    PostAnalytics post(title, likes, comments, shares, views);
    post.showAnalytics();

    return 0;
}