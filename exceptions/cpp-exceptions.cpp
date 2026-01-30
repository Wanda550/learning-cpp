#include <iostream>
#include <string>
#include <vector>

/*
    An exception is an error/problem that arises during the execution of a program,
    sometimes this will cause the program to stop running. We can catch and handle exceptions
    so that our program can continue running even after encountering an issue.

    try: run code inside this block in case of errors
    throw: throws and exception when a problem is detected
    catch: catch an exception thrown try block and run code inside this block
*/

void setRoomSlot(std::vector<int> roomSlots, int numPeople, int index) {
    if (index >= roomSlots.size() || index < 0) {
        throw -1;
    } 
    roomSlots[index] = numPeople;
}

int main() {
    std::vector<int> roomSlots = {0, 0, 0, 0, 0};
    setRoomSlot(roomSlots, 20, 15);

    std::cout << roomSlots[100] << std::endl;

    std::cout << "DONE!" << std::endl;

}