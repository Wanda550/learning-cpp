#include <iostream>

double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);

int main() {
    double a;
    double b;
    char choice;

    std::cout << "Enter the operation you want to implement (+, -, *, /): ";
    std::cin >> choice;

    while (choice != '+' && choice != '-' && choice != '*' && choice != '/') {
        std::cout << "Invalid input! Please enter (suitable) the operation you want to implement (+, -, *, /): ";
        std::cin >> choice;
    }

    std::cout << "Enter the numbers you want to operate: " << std::endl;
    std::cout << "A : ";
    std::cin >> a;
    std::cout << "B : ";
    std::cin >> b;

    switch (choice) {
        case '+':
            std::cout << "The answer: " << a << " + " << b << " = " << addition(a, b);
            break;
        case '-':
            std::cout << "The answer: " << a << " - " << b << " = " << subtraction(a, b);
            break;
        case '*':
            std::cout << "The answer: " << a << " * " << b << " = " << multiplication(a, b);
            break;
        case '/':
            std::cout << "The answer: " << a << " / " << b << " = " << division(a, b);
            if (b == 0) {
                std::cout << "Error! Division by zero!";
            } else {
                std::cout << "The answer: " << a << " / " << b << " = " << division(a, b);
            }
            break;
        default:
            break;
    }
};

double addition(double a, double b) {
    return a + b;
};

double subtraction(double a, double b) {
    return a - b;
};

double multiplication(double a, double b) {
    return a * b;
};

double division(double a, double b) {
    return a / b;
};