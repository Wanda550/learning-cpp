#include <iostream>

// static memory - stack memory (allocated at build/compile time)
// compile time is when your program is converted from a c++ into machine code. at this time there are checks for
// dynamic memory - heap memory/ free store (allocated at run time), needs to be cleaned up
// heap is larger than stack and is used when you don't know much memory you need ahead of time 
int main() {

    int capacity;
    std::cout << "How many tickets do you want to buy? ";
    std::cin >> capacity;

    // int lotteryTickets[3] = {55, 32}; // array on the stack with capacity = 3, size = 2 
    int* lotteryTickets = new int[capacity]{55, 32};

    /*
    for (int i = 0; i < 2; i++) {
        std::cout << "Enter a lottery number: ";
        // std::cin >> *(lotteryTickets + i);
        std::cin >> lotteryTickets[i];
    }
    */

    for (int i = 0; i < 2; i++) {
        std::cout << "Ticket " << i << ": " << lotteryTickets[i] << std::endl;
    }

    delete[] lotteryTickets;
    lotteryTickets = nullptr;
}