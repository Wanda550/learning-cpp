#include <iostream>
#include <array>
#include <iterator>
#include <vector>
#include <algorithm>
#include <random>

template <typename T>
void printNumbers(T begin, T end) {
    for (T it = begin; it != end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    // algorithm library - function to read/modify ranges of data of a container
    // sort, is sorted, reverse, replace, fill
    // max_element, min_element, find, count, shuffle

    std::vector<int> number = {55, 12, 42, 36, 100, 17, 11, 9, 100};

    auto begin = number.begin();
    auto end = number.end();

    printNumbers(begin, end);

    std::cout << std::is_sorted(begin, end) << std::endl;

    // sort
    std::sort(begin, end);

    printNumbers(begin, end);

    std::cout << std::is_sorted(begin, end) << std::endl;

    // reverse
    std::reverse(begin, end);

    printNumbers(begin, end);

    // replace
    std::replace(begin, end, 100, 900);

    printNumbers(begin, end);

    // fill
    std::fill(begin, end, 900);

    printNumbers(begin, end);

    // functions that search through the container

    // max_element
    std::cout << *std::max_element(begin, end) << std::endl;

    // min_element
    std::cout << *std::min_element(begin, end) << std::endl;

    // find
    std::cout << (std::find(begin, end, 900) != end) << std::endl;

    // count
    std::cout << std::count(begin, end, 900) << std::endl;

    // shuffle
    std::random_device rd; 
    std::mt19937 gen(rd());
    std::shuffle(begin, end, gen);

    printNumbers(begin, end);

    // array
    int numbersArray[] = {55, 12, 42, 36, 100, 17, 11, 9, 100};

    auto beginArray = std::begin(numbersArray);
    auto endArray = std::end(numbersArray);

    printNumbers(beginArray, endArray);

    std::cout << std::is_sorted(beginArray, endArray) << std::endl;

    std::sort(beginArray, endArray);

    printNumbers(beginArray, endArray);

    std::cout << std::is_sorted(beginArray, endArray) << std::endl;

    
    return 0;
}