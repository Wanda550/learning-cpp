#include <iostream>
#include <string>
#include <tuple>


// tuples are used to group any number of elements together
// the elements can be of different types
// not the same as python tuples, which is more like a const array

int main() {

    std::tuple<std::string, std::string, int> student; // name, course, grade

    // student = std::tuple<std::string, std::string, int>("Kang", "Science", 90);
    // student = std::make_tuple("Kang", "Science", 90);
    // std::get<2>(student) = 95;
    student = {"Kang", "Science", 90};

    std::string name;
    std::string course;
    int grade;

    tie(std::ignore, course, grade) = student;
    // auto[name, course, grade] = student;


    std::cout << std::get<0>(student) << std::endl;
    std::cout << std::get<1>(student) << std::endl;
    std::cout << std::get<2>(student) << std::endl;

    std::cout << name << std::endl;
    std::cout << course << std::endl;
    std::cout << grade << std::endl;
 
    std::cout << std::get<int>(student) << std::endl;
    // std::cout << std::get<string>(student) << std::endl;

    return 0;
}