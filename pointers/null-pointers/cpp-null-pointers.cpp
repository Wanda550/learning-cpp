#include <iostream>

int main() {

    int a = 10, b = 15, c = 20;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    // how to declare pointers on the same line
    int *pA = &a, *pB = &b, *pC = &c; // all are a pointer to an int;

    std::cout << "pA: " << pA << " *pA: " << *pA << std::endl;
    std::cout << "pB: " << pB << " *pB: " << *pB << std::endl;
    std::cout << "pC: " << pC << " *pC: " << *pC << std::endl;

    // maybe you dont have a memory address to point to currently but still want a pointer use a null pionter
    int *pD, *pE;
    pD = pE = nullptr;

    std::cout << "pD: " << pD << " *pD: " << *pD << std::endl;
    std::cout << "pE: " << pE << " *pE: " << *pE << std::endl;
}