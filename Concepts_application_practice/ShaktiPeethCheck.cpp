/**
 * @file ShaktiPeethCheck.cpp
 * @author Gandla
 * @brief Check whether a given temple is (in the sample) list of Shakti Peethams.
 *
 * Input : temple name (string)
 * Output: "Yes — it is a Shakti Peetham" or "No — it is not a Shakti Peetham"
 *
 * Note: This program uses a sample list. Add more names to the vector 'shaktiList'
 * if you want a larger database.
 *
 * @date 2025-11-03
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// normalize string: lower-case and remove extra spaces
string normalize(const string &s) {
    string t;
    // copy only printable non-leading/trailing spaces, convert to lowercase
    bool inSpace = false;
    for (char ch : s) {
        if (isspace((unsigned char)ch)) {
            if (!inSpace && !t.empty()) { t.push_back(' '); }
            inSpace = true;
        } else {
            t.push_back((char)tolower((unsigned char)ch));
            inSpace = false;
        }
    }
    // remove trailing space if any
    if (!t.empty() && t.back() == ' ') t.pop_back();
    return t;
}

int main() {
    // Sample list of commonly known Shakti Peethams (add or modify as needed)
    vector<string> shaktiListRaw = {
        "kamakhya", "kalighat", "tarapith", "vishalakshi", "vadodara",
        "majuli", "trikuti", "jai shree", "ambika", "mahakali"
        // Note: this is a sample list. Extend with accurate names if needed.
    };

    // normalize the list for case-insensitive compare
    vector<string> shaktiList;
    for (const string &name : shaktiListRaw) shaktiList.push_back(normalize(name));

    cout << "Enter temple name to search: ";
    string input;
    getline(cin, input);

    string key = normalize(input);

    bool found = false;
    for (const string &name : shaktiList) {
        if (name == key) { found = true; break; }
    }

    cout << "\nDate: 03-11-2025\n";
    if (found) {
        cout << "Yes — \"" << input << "\" is in the (sample) Shakti Peetham list.\n";
    } else {
        cout << "No — \"" << input << "\" is not in the (sample) Shakti Peetham list.\n";
    }

    cout << "\nNote: This program uses a sample list. Add more accurate temple names to\n"
         << "the 'shaktiListRaw' vector if you want a complete/authoritative database.\n";

    return 0;
}