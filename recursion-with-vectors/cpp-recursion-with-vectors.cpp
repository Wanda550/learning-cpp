#include <iostream>
#include <string>
#include <vector>

template <typename T, typename U>
bool vectorSearch(const std::vector<T>& vec, U element);

template <typename T, typename U>
bool vectorSearchR(const std::vector<T>& vec, U element, int index = 0);

int main() {
    std::vector<std::string> cities = {"Johannesburg", "Pretoria", "Durban", "Cape Town"};
    std::vector<int> numbers = {5, 2, 1, 10, -3, 60, 3, 60, 99, 105, -50, 1, 1};

    std::cout << "Johannesburg is in the vector cities" << ": " << vectorSearch(cities, "Johannesburg") << std::endl; // true
    std::cout << "Gqeberha is in the vector cities"  << ": "<< vectorSearch(cities, "Gqeberha") <<  std::endl; // false
    std::cout << "1 is in the vector numbers" << ": " << vectorSearch(numbers, 1) << std::endl; // true
    std::cout << "75 is in the vector numbers" << ": " << vectorSearch(numbers, 75) << std::endl; // false

    std::cout << std::endl;

    std::cout << "Johannesburg is in the vector cities" << ": " << vectorSearchR(cities, "Johannesburg") << std::endl; // true
    std::cout << "Gqeberha is in the vector cities"  << ": "<< vectorSearchR(cities, "Gqeberha") <<  std::endl; // false
    std::cout << "1 is in the vector numbers" << ": " << vectorSearchR(numbers, 1) << std::endl; // true
    std::cout << "75 is in the vector numbers" << ": " << vectorSearchR(numbers, 75) << std::endl; // false

    std::cout << std::endl;
};

template <typename T, typename U>
bool vectorSearch(const std::vector<T>& vec, U element) {
    for (int i = 0; i < vec.size(); i++) {
        if(vec[i] == element) {
            return true;
        }
    }
    return false;
};

template <typename T, typename U>
bool vectorSearchR(const std::vector<T>& vec, U element, int index) {
    if (index == vec.size()) {
        return false;
    }

    if(vec[index] == element) {
        return true;
    }

    return  vectorSearchR(vec, element, index + 1);
    
    // return vec[index] == element || vectorSearchR(vec, element, index + 1);
    // false || true || false || false || vectorSearch(4)
}