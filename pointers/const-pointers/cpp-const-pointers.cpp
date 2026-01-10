#include <iostream>

// const pointer 
// pointer const
int main() {


    int savings = 10000;
    const int savings2 = 15000;

    int* const pSavings = &savings; // copy the memory address of the variable savings so this is essentially a counterpart not a copy
    *pSavings += 5000;

    const int* pSavings2 = &savings2; // pointer to an int that is const
    int const* pSavings3 = &savings2; // pointer to const int
    // *pSavings2 += 1000;
    // *pSavings3 += 1000;

    const int* const pSavings4 = &savings2;
    // pSavings4 = &savings;
    // *pSavings4 += 1000;

    std::cout << savings << std::endl;
    std::cout << savings2 << std::endl;



}