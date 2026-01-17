#include <iostream>
#include <string>

// functions allow us to define a reusable block of code for a specific task/workflow
// a function needs to be called (invoked) to run the block of code
// a function can take in parameters/arguments, and return a value

void greet (const std::string& city = "Unknown"); // function signature

double multiply(double a, double b);

int main() {

    greet();
    greet("Johannesburg");
    greet("Pretoria");
    greet("Durban");
    greet("Cape town");
    
    double result = multiply(5.5, 5.5);

    std::cout << result << std::endl;
}

void greet (const std::string& city) { // city = "Johannesburg"
    std::cout << "Hello" << " " << city << std::endl;
};

double multiply(double a, double b) {
    return a * b;
}