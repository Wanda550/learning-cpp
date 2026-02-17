#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>

// tolower, toupper - returns converted char
// islower, isupper, isalpha, isalnum, isspace, isdigit - returns non zero int
// 0 -> false, non 0 -> true

int main() {
    std::string username = "SLUMLORDV2";

    std::string inputUsername;

    std::cout << "Enter your name: ";
    std::cin >> inputUsername;

    for(size_t i = 0; i < inputUsername.size(); i++) {
        inputUsername[i] = toupper(inputUsername[i]);
    }

    std::cout << "Your username is: " << inputUsername << std::endl;

    if (username == inputUsername) {
        std::cout << "Your input username is correct!" << std::endl;
    }

    std::string password;

    int digit = 0;
    int lowerCount = 0;
    int upperCount = 0;

    std::cout << "Enter your password(at least 3 digits, 5 lowercase, and 2 uppercase): ";
    std::cin >> password;

    for(size_t i = 0; i < password.size(); i++) {
        char c = password[i];

        if(std::islower(c) != 0) {
            lowerCount += 1;
        } else if (std::isupper(c) != 0) {
            upperCount += 1;
        } else if (std::isdigit(c) != 0) {
            digit += 1;
        }
    }

    if(digit < 3) {
        std::cout << "The number of digits in your password is insufficient!" << std::endl;
    } else if (lowerCount < 5) {
        std::cout << "The number of lowercase letters in your password is insufficient!" << std::endl;
    } else if (upperCount < 2) {
        std::cout << "The number of uppercase letters in your password is insufficient!" << std::endl;
    }

    std::cout << "Your password: " << password << " contains" << std::endl;
    std::cout << "Digits: " << digit << std::endl;
    std::cout << "lower: " << lowerCount << std::endl;
    std::cout << "upper: " << upperCount << std::endl;

    return 0;
}