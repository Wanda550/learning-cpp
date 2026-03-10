#include <iostream>
#include <sstream> // sting stream
#include <string>

// string stream -used to parse and format strings
// basically iostream but instead of input/output with console, you have strings

int main() {

    int a = 50;
    int b = 100;
    int result = a + b;
    std::string display;

    // convert int to a string with the function to_string
    display = std::to_string(a) + " + " + std::to_string(b) + " = " + std::to_string(result);
    std::cout << display << std::endl; 

    std::stringstream ss;
    ss << a << " + " << b <<  " = " <<  result << std::endl;
    ss << a << " * " << b <<  " = " <<  a * b << std::endl;

    // getline(ss, display);
    // ss.str("slumlordv2");
    display = ss.str();
    /* while(ss >> display) {
        std::cout << display << " "; 
    };
    */
    // ss.str("");
    // ss.clear();
    std::cout << display << std::endl;

    std::string grades = "95,85,75,92,88,96,81";
    std::string grade;
    int totalGrade;
    int numGrade = 0;

    std::stringstream ss2;
    ss2.str(grades);

    // std::cout << ss2.str() << std::endl;
    // getline(ss, grades, ',');
    // std::cout << grade << std::endl;

    while(getline(ss2, grade, ',')) {
        std::cout << grades << std::endl;
        totalGrade += std::stoi(grade); // stoi to convert string to int
        numGrade++;
    };
    
    ss2.str("");
    ss2.clear();
    ss2 << "Average: " << totalGrade/numGrade << std::endl;
    std::cout << ss2.str() << std::endl;

    return 0;
}