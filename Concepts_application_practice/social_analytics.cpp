/**
 * @file social_analytics.cpp
 * @author Gandla Bhargavi
 * @brief This program simulates social media analytics.
 *   It counts likes, shares, and comments with current date.
 * @date 14-04-2026
 */

#include <iostream>
#include <ctime>
using namespace std;

/**
 * @brief Class for Analytics to track likes, shares, and comments.
 * It also displays the analytics report with the current date.
 */
class Analytics {
private:
    int likes = 0;
    int shares = 0;
    int comments = 0;

public:

    // Add like
    void addLike() {
        likes++;
        cout << "Liked 👍\n";
    }

    // Add share
    void addShare() {
        shares++;
        cout << "Shared 🔁\n";
    }

    // Add comment
    void addComment() {
        comments++;
        cout << "Comment added 💬\n";
    }

    void dislike()
    {
        if (likes > 0)
        {
            likes--;
            cout << "Disliked 👎\n";
        }
        else
        {
            cout << "No likes to remove!\n";
        }
    }

    // Show analytics
    void showAnalytics() {

        cout << "\n===== Analytics Report =====\n";

        cout << "Likes: " << likes << endl;
        cout << "Shares: " << shares << endl;
        cout << "Comments: " << comments << endl;

        // Show current date
        time_t now = time(0);
        tm *ltm = localtime(&now);

        cout << "Date: "
             << ltm->tm_mday << "-"
             << 1 + ltm->tm_mon << "-"
             << 1900 + ltm->tm_year << endl;
    }
};

/**
 * @brief Main function to demonstrate social media analytics.
 * It provides a menu to add likes, shares, comments, and view analytics.   
 */
int main() {

    Analytics a;
    int choice;

    cout << "===== Social Media Analytics =====\n";

    do {
        cout << "\n1. Like\n";
        cout << "2. Share\n";
        cout << "3. Comment\n";
        cout << "4. View Analytics\n";
        cout << "5. Dislike\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                a.addLike();
                break;

            case 2:
                a.addShare();
                break;

            case 3:
                a.addComment();
                break;

            case 4:
                a.showAnalytics();
                break;

            case 5:
                a.dislike();
                break;

            case 6: 
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 6);

    return 0;
}