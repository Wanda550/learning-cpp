#include <iostream>
#include <string>
#include <vector>

int multiply(int a, int b);
double multiply(double a, double b);
int multiply(int a, int b, int c);
int multiply(int numbers[], int n);
std::string multiply(char c, int n);
std::string multiply(int n, char c);

// function overloading = polymorphic function (poly = many, morph = forms)
// fuction overloading allows us to create a multiple function with the same name
// no two functions of the same name can have the same exact signature

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    std::cout << "A * B = " << multiply(5, 3) << std::endl;
    std::cout << "A * B = " << multiply(5, 3, 4) << std::endl;
    std::cout << "A * B = " << multiply(numbers, 5) << std::endl;
    std::cout << "A * B = " << multiply(5.5, 5.5) << std::endl;
    std::cout << "A * B = " << multiply('$', 3) << std::endl;
    std::cout << "A * B = " << multiply(3, '$') << std::endl;
}

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, int b, int c) {
    return a * b * c;
}

int multiply(int numbers[], int n) {
    int result = 1;

    for (int i = 0; i < n; i++) {
        result *= numbers[i];
    }

    return result;
}

std::string multiply(char c, int n) {
    std::string result = "";

    for (int i = 0; i < n; i++) {
        result += c;
    }

    return result;
}

std::string multiply(int n, char c) {
    return multiply(c, n);
}