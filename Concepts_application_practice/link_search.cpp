/**
 * @file link_search.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program searches for a URL link (http/https) in a given string.
 *   It uses <regex> to detect the link pattern.
 * @date 27-08-2025
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief   Function to search for a URL link in a given text.
 * 
 */

void link_search()
{
   string text;
    cout << "Enter text: ";
    getline(cin, text);

    size_t pos_http = text.find("http://");
    size_t pos_https = text.find("https://");
    size_t pos = string::npos;

    if (pos_http != string::npos && (pos_https == string::npos || pos_http < pos_https)) {
        pos = pos_http;
    } else if (pos_https != string::npos) {
        pos = pos_https;
    }

    if (pos != string::npos) {
        size_t end = text.find_first_of(" \t\n", pos);
        string url = text.substr(pos, end == string::npos ? string::npos : end - pos);
        cout << "Found link: " << url << endl;
    } else {
        cout << "No link found." << endl;
    }
}
/**
 * @brief  Main function to execute the link search example .
 * 
 * @return int 
 */
int main() {

    link_search();
    return 0;
}