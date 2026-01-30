#include <iostream>
#include <string>
#include <vector>

// An enumeration is a special type that represents a group of named integers values
// ex) days of the week, list of emails, list of Pokemon, Error Codes, etc

enum Snack {
    CHOCOLATE = 400,    // 0
    COOKIES,            // 1
    GUMMY_BEARS,        // 2
    CHIPS = 600,              // 3
    CHIPS_BBQ           // 4
};

void addItems (std::vector<Snack>& items, int NumbersEntered) {
    switch(NumbersEntered) {
        case Snack::CHOCOLATE:
            std::cout << "Chocolate added!" << std::endl;
            items.push_back(Snack::CHOCOLATE);
            break;
        case Snack::COOKIES:
            std::cout << "Cookies added!" << std::endl;
            items.push_back(Snack::COOKIES);
            break;
        case Snack::GUMMY_BEARS:
            std::cout << "Gummy bears added!" << std::endl;
            items.push_back(Snack::GUMMY_BEARS);
            break;
        case Snack::CHIPS:
            std::cout << "Chips added!" << std::endl;
            items.push_back(Snack::CHIPS);
            break;
        case Snack::CHIPS_BBQ:
            std::cout << "BBQ Chips added!" << std::endl;
            items.push_back(Snack::CHIPS_BBQ);
            break;
        default:
            std::cout << "Item unknown" << std::endl;
    }
};

int main () {

    int GUMMY_BEARS = 70;

    Snack currentItem =  Snack::GUMMY_BEARS; // to avoid naming conflicts add an identifier  
    std::cout << "Current Item: " << currentItem << std::endl;

    int numberEntered = CHOCOLATE;

    std::vector<Snack> items;

    for(int i = 0; i < 3; i++) {
        std::cout << "Enter a number: ";
        std::cin >> numberEntered;
        addItems(items, numberEntered);
    }

}