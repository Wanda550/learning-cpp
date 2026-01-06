#include <iostream> 

// A switdh statement ceates a  jump/ look-up table for comparing a single value
// Instead of going through an if/else ladder, a switch statement maps a value to a case
// we cannot compare std::string with switch case statements, we can with other languages
int main() {
    std::string items[] = {"red potion", "green potion", "blue potion", "hamburger", "super red potion"};

    int item = 4;

    switch (item){
        case 4: 
            std::cout << "Attack strength increased. " << std::endl;
        case 3:
        case 0:
            std::cout << "Recovered 50 HP. " << std::endl;
            break;

        case 1:
            std::cout << "Cured poison status. " << std::endl;
            break;
        case 2:
            std::cout << "Recovered 20 HP. " << std::endl;
            break;
        default:
            std::cout << "Nothing happenned. " << std::endl;
            break;
    }
}