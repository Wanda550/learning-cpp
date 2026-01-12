#include <iostream>

// static memory - stack memory (allocated at build/compile time)
// dynamic memory - heap memory/ free store (allocated at run time), needs to be cleaned up
// heap is larger than stack and is used when you don't know much memory you need ahead of time 
int main() {
    int savings = 10000;
    std::cout << &savings << " " << savings << std::endl;

    int* pSavings = new int(50000); // created on the heap with new keyword
    std::cout << &pSavings << std::endl;
    std::cout << pSavings << " " << *pSavings << std::endl;

    delete pSavings;
    // dangling pointer is a pointer that used to have a use but has no use anymore
    // avoid by setting pointer to nullptr
    pSavings = nullptr;

    // pSavings = new int(75000); // created on the heap with new keyword
    // std::cout << &pSavings << std::endl;
    // std::cout << pSavings << " " << *pSavings << std::endl;

}