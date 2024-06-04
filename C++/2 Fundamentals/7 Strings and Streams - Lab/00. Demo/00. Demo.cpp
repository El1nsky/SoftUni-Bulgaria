#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

bool isValidUsername(const string& username) {
    if (username.length() < 3 || username.length() > 16) {
        return false;
    }

    for (char c : username) {
        if (!isalnum(c) && c != '-' && c != '_') {
            return false;
        }
    }

    return true;
}

int main() {
    string usernames;

    // Read usernames from the first line
    getline(cin, usernames);

    // Split usernames by comma and space
    stringstream ss(usernames);
    string username;


    // Iterate through each username and check validity
    while (getline(ss, username, ',')) {
        username.erase(remove_if(username.begin(), username.end(), isspace), username.end());  // Remove leading/trailing spaces

        if (isValidUsername(username)) {
            cout << username << endl;
        }
    }

    return 0;
}
