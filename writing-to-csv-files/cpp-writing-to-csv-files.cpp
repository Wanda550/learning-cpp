#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

// fstream - include read (ios::in), write (ios::out), append (ios::app) modes
// ofstream - write only (will overwrite the file if it already exists!)
// ifstream - read only
// csv (comma separate value), data values separated by commas (no space)

int main() {

    /*
    std::string fruits[] = {"Apple", "Banana", "Cherry", "Orange", "Pear", "Watermelon"};
    float prices[] = {3.53, 4.089, 3.25, 6.06, 2.56, 9.90};
    int fruitCount = 6;

    std::fstream myFile;
    myFile.open("fruit-prices.csv", std::ios::out);

    if(myFile.is_open()) {
        for(int i = 0; i < fruitCount; i++) {
            myFile << fruits[i] << "," << prices[i] << std::endl;
        };
    };
    */

    std::ifstream myFile("fruit-prices.csv");

    if(myFile.is_open()) {
        std::string line;
        while(std::getline(myFile, line)) {
            // std::cout << line << std::endl;
            std::stringstream ss(line);

            std::string fruit;
            std::getline(ss, fruit, ',');
            std::cout << fruit << " ";

            std::string price;
            std::getline(ss, price, ',');
            std::cout << price << std::endl;
        }
    }

    myFile.close();

    return 0;
}