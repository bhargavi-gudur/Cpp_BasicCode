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
#include <regex>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    // Regex for http or https links
    regex url_pattern("(https?://[a-zA-Z0-9./?=_-]+)");

    smatch match;
    if (regex_search(text, match, url_pattern)) {
        cout << "Found link: " << match.str() << endl;
    } else {
        cout << "No link found." << endl;
    }

    return 0;
}