#include <iostream>
#include <string>
#include <utility>
#include <vector>

// typedef is used for aliasing data types, user-defined data-types, and pointers
// used to give a more meaningful name and shorter to type

// typedef std::pair<std::string, int> Student_t;
using Student = std::pair<std::string, int>;

// typedef std::vector<std::pair<std::string, int>> Student_t;
using StudentList = std::vector<std::pair<std::string, int>>;

int main() {

    Student s1("Kang", 18);
    std::cout << s1.first << " " << s1.second << std::endl;

    std::vector<Student> students;
    students.push_back(s1);
    std::cout << students[0].first << std::endl;

}