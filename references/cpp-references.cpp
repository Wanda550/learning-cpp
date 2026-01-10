#include <iostream>
#include <string>
#include <vector>


// with a reference you are not creating a copy of a variable you are referencing that same value
// with a pointer you can reassign the memory address of the variable4
// you cannot reassign a reference
int main() {

    int savings = 10000;
    int savings2 = 50000;
    int* pSavings = &savings; // copy the memory address of the variable savings so this is essentially a counterpart not a copy

    *pSavings += 5000;

    int& rSavings = savings; // rSavings, refSavings, savings_ref, savingsRef
    rSavings = savings2; // savings = savings 2; savings = 50000
    // int savings2 = savings2;  // a copy
    rSavings += 2000;

    std::cout << savings << std::endl;
    std::cout << savings2 << std::endl;
    std::cout << *pSavings << std::endl;
    std::cout << rSavings << std::endl;

    std::vector<std::string> courses = {"Mathematics", "English", "Physics"};
    std::vector<std::string>* pCourses = &courses;
    std::vector<std::string>& rCourses = courses;

    pCourses->push_back("History");
    rCourses.push_back("Biology");

    for(int i = 0; i < courses.size(); i++) {
        std::cout << courses[i] << " ";
    }

    std::cout << std::endl;

    for(int i = 0; i < pCourses->size(); i++) {
        std::cout << (*pCourses)[i] << " ";
    }

    std::cout << std::endl;

    for(int i = 0; i < rCourses.size(); i++) {
        std::cout << rCourses[i] << " ";
    }

    std::cout << std::endl;
}