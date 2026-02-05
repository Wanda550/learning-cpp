#include <iostream>
#include <set>
#include <vector>

/*
    iterators are containers that function like pointers
    basically, they are generalized wrappers for pointers

    outputIterator - can write (mutable)
    inputIterator - can read

    forwardIterator - can only move forward ++
    bidirectional - can move forward  ++ and backward --
    RandomAccessIterator - can jump to a point with + or - number

    vector/deque = randomAccess
    forward_list (singly linked list) = forward
    list (doubly linked list) = bidirectional
    set/map = bidirectional

*/

template<typename T>
void print(const T& container);

int main() {
    std::vector<int> numbers = {5, 10, 65, 24, 17};
    numbers.insert(numbers.begin(), 100);

    std::set<int> numberSet = {5, 10, 65, 24, 17};
    numberSet.insert(100);

    std::cout << *numbers.begin() << std::endl;

    std::vector<int>::const_iterator start = numbers.begin();
    start += 2;
    std::cout << *start << std::endl;

    auto end = numbers.end();

    std::cout << *(end - 1) << std::endl;

    print(numbers);
    print(numberSet);
}


template<typename T>
void print(const T& container) {
    auto it = container.begin(); // it or iter for iterator

    while (it != container.end()) {
        std::cout << *it << " ";
        it++;
    }

    std::cout << std::endl;
}