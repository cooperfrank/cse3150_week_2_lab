#include <iostream>
#include <string>
#include "parser.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    cout << "Enter your full name." << endl;

    string fullName;
    getline(cin, fullName);

    cout << "Enter your email address." << endl;

    string email;
    getline(cin, email);

    string* firstName = new string;
    string* lastName = new string;

    StringUtils::parseName(fullName, firstName, lastName);

    string username = StringUtils::getUsername(email);

    cout << "First name: " << *firstName << endl;
    cout << "Last name: " << *lastName << endl;
    cout << "Username: " << username << endl;

    return 0;
}
