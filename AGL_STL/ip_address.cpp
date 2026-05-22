/**
 * @file ip_address.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program validates an IP address
 *   using STL vector, stringstream,
 *   and constructor in C++.
 * @date 22-05-2026
 */

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

/**
 * @brief Class for IP Validation
 */
class IPValidator {

private:
    string ip;
    vector<int> parts;

public:

    /**
     * @brief Constructor
     */
    IPValidator(string address) {

        ip = address;
    }

    /**
     * @brief Split IP address
     */
    void splitIP() {

        stringstream ss(ip);

        string temp;

        while(getline(ss, temp, '.')) {

            parts.push_back(stoi(temp));
        }
    }

    /**
     * @brief Validate IP address
     */
    void validateIP() {

        if(parts.size() != 4) {

            cout << "Invalid IP Address\n";
            return;
        }

        for(int value : parts) {

            if(value < 0 || value > 255) {

                cout << "Invalid IP Address\n";
                return;
            }
        }

        cout << "Valid IP Address\n";
    }

    /**
     * @brief Display IP parts
     */
    void showParts() {

        cout << "\nIP Address Parts:\n";

        for(int value : parts) {

            cout << value << endl;
        }
    }
};

/**
 * @brief Main function 
 */
int main() {

    string address;

    cout << "===== IP Address Validator =====\n";

    cout << "Enter IP Address: ";
    cin >> address;

    // Constructor called
    IPValidator ip(address);

    ip.splitIP();

    ip.showParts();

    ip.validateIP();

    return 0;
}