/**
 * @file movie_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates movie booking for 4 theaters.
 *   Supports online and offline booking.
 *   If offline seats are full, suggests other movies.
 *   Displays current date automatically.
 * @date 16-04-2026
 */

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

/**
 * @brief Movie class
 */
class Movie {
public:
    string name;
    int seats;
};

/**
 * @brief Theater system
 */
class Theater {
private:
    vector<Movie> movies;

public:

    // Initialize movies
    void initMovies() {
        movies.push_back({"Pushpa", 2});
        movies.push_back({"RRR", 2});
        movies.push_back({"Salaar", 2});
        movies.push_back({"Kalki", 2});
    }

    // Show movies
    void showMovies() {
        cout << "\nAvailable Movies:\n";
        for(int i = 0; i < movies.size(); i++) {
            cout << i+1 << ". " << movies[i].name
                 << " | Seats: " << movies[i].seats << endl;
        }
    }

    // Booking function
    void bookMovie() {

        int type, choice;

        cout << "\n1. Online Booking\n2. Offline Booking\n";
        cout << "Enter choice: ";
        cin >> type;

        showMovies();

        cout << "Select movie: ";
        cin >> choice;

        if(choice < 1 || choice > movies.size()) {
            cout << "Invalid movie!\n";
            return;
        }

        // ONLINE BOOKING
        if(type == 1) {
            if(movies[choice-1].seats > 0) {
                movies[choice-1].seats--;
                cout << "Online booking successful!\n";
            } else {
                cout << "No seats available!\n";
            }
        }

        // OFFLINE BOOKING
        else if(type == 2) {

            if(movies[choice-1].seats > 0) {
                movies[choice-1].seats--;
                cout << "Offline booking successful!\n";
            }
            else {
                cout << "Offline seats full! Try other movies:\n";

                for(int i = 0; i < movies.size(); i++) {
                    if(movies[i].seats > 0)
                        cout << movies[i].name << endl;
                }
            }
        }

        else {
            cout << "Invalid booking type!\n";
        }
    }

    // Show date
    void showDate() {
        time_t now = time(0);
        tm *ltm = localtime(&now);

        cout << "Date: "
             << ltm->tm_mday << "-"
             << 1 + ltm->tm_mon << "-"
             << 1900 + ltm->tm_year << endl;
    }
};

/**
 * @brief Main function
 */
int main() {

    Theater t;
    int choice;

    t.initMovies();

    cout << "===== Movie Theater Booking =====\n";
    t.showDate();

    do {
        cout << "\n1. Show Movies\n";
        cout << "2. Book Ticket\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                t.showMovies();
                break;

            case 2:
                t.bookMovie();
                break;

            case 3:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}