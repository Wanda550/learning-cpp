#include <iostream>
#include <string>
#include <vector>

// variables in cpp are stored values they do not point/reference to a value;
// that means if you make a copy of a variable you would only be able to change a value of the copy or the original but not both
// using pointers help us access the memory address a variable and make a counterpart not just a copy so if you add/delete a value in a variable all of the variable referencing that memory address can change 
int main() {
    int savings = 10000;
    int* pSavings2 = &savings; // copy the memory address of the variable savings so this is essentially a counterpart not a copy

    *pSavings2 += 5000;

    std::cout << savings << std::endl;
    std::cout << *pSavings2 << std::endl;

    std::vector<std::string> courses = {"Chemistry", "Physics", "Calculus"};
    std::vector<std::string>* pCourses2 = &courses; // copy

    // arrow operator (* ) to ->
    pCourses2->push_back("Mathematics");

    for(size_t i = 0; i < courses.size(); i++) {
        std::cout << courses[i] << " ";
    }

    std::cout << std::endl;

    for(size_t i = 0; i < pCourses2->size(); i++) {
        std::cout << (*pCourses2)[i] << " ";
        // std::cout << pCourses2->operator[](i) << " ";
    }

    std::cout << std::endl;
}