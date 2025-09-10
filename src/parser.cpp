#include <string>
#include "parser.h"

namespace StringUtils {
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
        size_t pos = fullName.find(" ");

        *firstName = fullName.substr(0, pos);
        *lastName = fullName.substr(pos+1);
    }

    std::string getUsername(const std::string& email) {
        size_t pos = email.find("@");

        return email.substr(0, pos);
    }
}
