#include <iostream>
#include <vector>

// a while loop is used to repeat a block of code 
// an unspecified number of times until a condition is met
int main() {

    std::vector<std::string> cities = {"Johannesburg", "Pretoria", "Cape Town", "Durban"};
    std::string targetCity = "Cape Town";
    bool found = false;

    // a for loop example
    for (size_t i = 0; i < cities.size(); i++) {
        std::cout << i << ": " << cities[i] << std::endl;
    }

    size_t i = 0;

    std::cout << std::endl;

    // iterate through the vector until you find the targetCity
    while (i < cities.size() && !found) {
        std::cout << i << ": " << cities[i] << std::endl;

        if(cities[i] == targetCity) {
            found = true;
        } 

        i++;
    }

    std::cout << std::endl;

    // display if the target city was found
    if (found) {
        std::cout << targetCity << " " << "FOUND!" << std::endl;
    } else {
        std::cout << targetCity << "NOT FOUND!" << std::endl;
    }
}