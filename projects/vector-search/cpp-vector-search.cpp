#include <iostream>
#include <string>
#include <vector>

template <typename T, typename U>
bool vectorSearch(const std::vector<T>& vec, U element);

template <typename T, typename U>
int vectorCount(const std::vector<T>& vec, U element);

int main() {
    std::vector<std::string> cities = {"Johannesburg", "Pretoria", "Durban", "Cape Town"};
    std::vector<int> numbers = {5, 2, 1, 10, -3, 60, 3, 60, 99, 105, -50, 1, 1};

    std::cout << "Johannesburg is in the vector cities" << ": " << vectorSearch(cities, "Johannesburg") << std::endl; // true
    std::cout << "Gqeberha is in the vector cities"  << ": "<< vectorSearch(cities, "Gqeberha") <<  std::endl; // false
    std::cout << "1 is in the vector numbers" << ": " << vectorSearch(numbers, 1) << std::endl; // true
    std::cout << "75 is in the vector numbers" << ": " << vectorSearch(numbers, 75) << std::endl; // false

    std::cout << std::endl;

    std::cout << "There are " << vectorCount(numbers, 60) << " occurences of (num) in the vector numbers" << std::endl; // 2
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
int vectorCount(const std::vector<T>& vec, U element) {

    int count = 0;

    for (int i = 0; i < vec.size(); i++) {
        if(vec[i] == element) {
            count += 1;
        }
    }

    return count;
}