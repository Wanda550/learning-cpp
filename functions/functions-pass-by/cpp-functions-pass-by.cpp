#include <iostream>
#include <string>
#include <vector>

void Swap(int &a, int &b);
void makeUpperCase(std::string &name);
void displayCities(const std::vector<std::string> &cities);

// Pass by Value - generally used for primitive types (non class) ex, int, double, float, bool, char
// Pass by reference - generally used for class types ex) string, vector
// Pass by const reference - same as above const, only for reading the parameter and not modifying

int main() {
    int a = 10;
    int b = 20;

    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;

    Swap(a, b);

    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;

    std::string name = "slumlord";

    makeUpperCase(name);

    std::cout << "makeUpperCase: " << name << std::endl;

    std::vector<std::string> cities = {"Johannesburg", "Pretoria", "Durban", "Cape Town"};

    displayCities(cities);
}

void Swap(int &a, int &b) {
    int temp = a;
    a = b; 
    b = temp;
};

void makeUpperCase(std::string &name) {
    for(int i = 0; i < name.size(); i++) {
        name[i] = toupper(name[i]);
    }

    std::cout << "makeUpperCase: " << name << std::endl;
}

void displayCities(const std::vector<std::string> &cities) {
    for(std::string city : cities) {
        std::cout << city << std::endl;
    }
}