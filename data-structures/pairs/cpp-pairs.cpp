#include <iostream>
#include <string>
#include <cmath>
#include <utility>

// pairs are used to group 2 element together
// the 2 elements can be of different data types (heterogenous type)

int getDistance(const std::pair<int, int>& p1, const std::pair<int, int>& p2) {

    int distance = sqrt(pow((p2.first - p1.first), 2) + pow((p2.second - p1.second), 2));

    return distance;
}

int main() {

    std::pair<std::string, int> student; // ("Kang", 18);

    // student = std::pair<std::string, int>("Kang", 18);
    // student = std::make_pair<>("Kang", 18);
    student = {"Kang", 18}; // packing
    auto[name, age] = student; // unpacking

    // student.first = "Kang";
    // student.second = 30;

    std::cout << student.first << " " << student.second << std::endl;
    std::cout << name << " " << age << std::endl;

    std::pair<int, int> p1(10, 15);
    std::pair<int, int> p2(13, 19);

    std::cout << getDistance(p1, p2) << std::endl;

    return 0;
}