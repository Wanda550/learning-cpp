#include <iostream>
#include <string>
#include <vector>

template <typename T>
void Swap(T& a, T& b);
template <typename U>
void displayVectors(std::vector<U>& cities);
// void Swap(std::string &s1, std::string &s2); overloading

int main() {

    int a = 5;
    int b = 10;

    std::cout << "A: "<< a << " B: " << b << std::endl;

    Swap<int>(a, b);

    std::cout << "A: "<< a << " B: " << b << std::endl;

    std::string s1 = "apples";
    std::string s2 = "bananas";

    std::cout << "A: "<< s1 << " B: " << s2 << std::endl;

    Swap<std::string>(s1, s2);

    std::cout << "A: "<< s1 << " B: " << s2 << std::endl;

    std::vector<std::string> cities = {"Johannesburg", "Pretoria", "Durban", "Cape Town"};
    std::vector<int> numbers = {1, 5, 10, 25, 50, 100};
    displayVectors(cities);
    displayVectors(numbers);
};

template <typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b; 
    b = temp;
};

/* function overloading
void Swap(std::string &s1, std::string &s2) {
    std::string temp = s1;
    s1 = s2; 
    s2 = temp;
};
*/

template <typename U>
void displayVectors(std::vector<U>& vec){
    for(size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }
};