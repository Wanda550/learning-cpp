#include <iostream>

/*
int factorial(int n) {
    int result = 1;

    while (n > 1) {
        result *= n;
        n -=1 ;
    }

    return result;
} */

int factorial(int n) {
    if(n <= 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

// iteration - for loops, while loops, terminates when condition is met
// recursion - function that calls itself, terminates with base case condition is met
int main() {

    // factorial (denoted in math as !, ex. n!) is the product of all numbers from 1 to n
    // ex 5. factiorail (5!) is equal to 5*4*3*2*1 = 120

    int n;

    std::cout << "Enter number to factorialise: ";
    std::cin >> n;

    std::cout << n << " Factorial is equal to: " << factorial(n) << std::endl;
}