#include <iostream>

// a vector is a dynamic array (ArrayList in Java, list in Python, etc, any collection enclosed in [])
// a dynamic array has 3 fields, which includes a dynamically allocated array to store it's data
// dynamic array = an array that "resizes" once a capacity is full
// "resize" by creating a new array with double the capacity, and 
// copy all values over to the new array, and then destroy the previous array
int main() {

    // vector class has these 3 data members
    int size = 0; // # of elements in the array
    int capacity = 4; // # of elements the the array can hold 
    int* data = new int[capacity]; // # dynamically allocated array
 
    int numOfItems; // # of elements in the array

    // vector
    std::cout << "Enter the number of items in your bag: ";
    std::cin >> numOfItems;

    // [1, 5, 10, _, _]
    for (int i = 0; i < numOfItems; i++) {
        if (size == capacity) {
            std::cout << "Capacity full, doubling size of capacity from: " << capacity << std::endl;
            capacity *= 2;
            std::cout << "Capacity is now: "  << capacity<< std::endl;

            int* newData = new int[capacity]; // create new array

            for (int j = 0; j < size; j++) {
                newData[j] = data[j]; // copy data from previous array
            }

            delete[] data; // freeup the memory of the previous array
            data = newData; // assign the new array to the data pointer
            newData = nullptr; // get rid of the temporary pointer created in this if statement
        }

        std::cout << "Enter the item value: ";
        std::cin >> data[size]; // add to end to the array (vector.push_back())
        size++;
    }

    for (int i = 0; i < size; i++) {
        std::cout << "Item value "  << i << ": " << data[i] << std::endl;
    }

    delete[] data;
    data = nullptr;
}