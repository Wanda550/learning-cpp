#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

/*
    An exception is an error/problem that arises during the execution of a program,
    sometimes this will cause the program to stop running. We can catch and handle exceptions
    so that our program can continue running even after encountering an issue.

    try: run code inside this block in case of errors
    throw: throws an exception when a problem is detected
    catch: catch an exception thrown try block and run code inside this block
*/

int getRoomSlot(const std::vector<int>& roomSlots, int index) {

    try {
        int numPeople = roomSlots.at(index);
        std::cout << "Room " << index << " has " << numPeople << " people\n";
        return numPeople;
    } catch (...) {
        std::cerr << "getRoomSlot - Invalid room index: " << index << std::endl;
        throw; // rethrow so caller can handle it too
    }
};

void setRoomSlot(std::vector<int>& roomSlots, int index, int numPeople) {

    int current = getRoomSlot(roomSlots, index);

    if (current != 0) {
        throw std::runtime_error("setRoomSlot - Room is already booked");
    }

    roomSlots[index] = numPeople;
};

int main() {
    std::vector<int> roomSlots = {0, 20, 25, 0, 0};

    try {
        setRoomSlot(roomSlots, 20, 15); // invalid index or valid 
    } catch(const std::out_of_range& e) { // error, e
        std::cerr << "main - Out of range" << std::endl;
    } catch(const std::exception& e) { // error, e
        std::cerr << e.what() << std::endl;
    }

    // std::cout << roomSlots[100] << std::endl;

    std::cout << "DONE!" << std::endl;

};