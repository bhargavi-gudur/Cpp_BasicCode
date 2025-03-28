/**
 * @file youtubechannel_encapulation.cpp
 * @author Gandla Bhargavi
 * @brief This file demonstrates the concept of encapsulation in C++ by creating a simple YouTube channel class.
 * @version 0.1
 * @date 2025-03-19
 *
 *
 */
#include <iostream>
#include <list>

using std::cin;
using std ::cout;
using std::endl;
using std ::list;
using std ::string;

/**
 * @brief   created a class of youtubechannel attriables /methods
 * are encapusulated  .
 *
 */
class youtubechannel
{
private:
    string name;                  // Channel name
    string ownerName;             // Owner of the channel
    int subscriberCount;          // Number of subscribers
    list<string> publishedVideos; // List of published videos

public:
    // Constructor to initialize the channel's attributes
    youtubechannel(string channelName, string channelOwner)
    {
        name = channelName;
        ownerName = channelOwner;
        subscriberCount = 0; // Start with zero subscribers
    }

    // Method to display channel information
    void getInformation()
    {
        cout << "Channel Name: " << name << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Subscribers: " << subscriberCount << endl;
        cout << "Published Videos: ";
        for (string video : publishedVideos)
        {
            cout << video << ", ";
        }
        cout << endl;
    }

    // Method to increment subscriber count
    void subscribe()
    {
        subscriberCount++;
    }

    // Method to decrement subscriber count
    void unsubscribe()
    {
        if (subscriberCount > 0)
        {
            subscriberCount--;
        }
    }

    // Method to publish a video
    void publishVideo(string title)
    {
        publishedVideos.push_back(title);
    }
};

/**
 * @brief  main function
 *
 * @return int
 */
int main()
{
    // Create a YouTube channel object
    youtubechannel objyoutubechannel("Coding World", "Gandla Bhargavi");

    // Simulate actions on the channel
    objyoutubechannel.subscribe();
    objyoutubechannel.subscribe();
    objyoutubechannel.publishVideo("C++ Tutorials for Beginners");
    objyoutubechannel.publishVideo("Object-Oriented Programming in C++");

    // Display channel information
    objyoutubechannel.getInformation();

    // Simulate an unsubscribe action
    objyoutubechannel.unsubscribe();

    // Display updated information
    cout << "\nAfter unsubscribe:" << endl;
    objyoutubechannel.getInformation();

    return 0;
}
