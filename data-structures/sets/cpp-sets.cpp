#include <iostream>
#include <string>
#include <vector>
#include <set> //   includes multiset
#include <unordered_set>

/*
    A set is a collection of unique elements (no duplicates)
    order -> by insertion, or by sorted
    in C++:
        A set is in sorted order, whereas in other languages, set may not be sorted
        An unordered set is not or ordered by insertion, nor sorted
    A vector is ordered by insertion (not sorted)
*/

template <typename T>
void print(const T& container) {

    for (auto it = container.begin(); it != container.end(); it++) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
}

int main() {

    std::vector<char> charVec = {'C', 'A', 'B'};
    std::set<char> charSet = {'C', 'A', 'B'};
    std::unordered_set<char> charUnorderedSet = {'C', 'A', 'B'};

    print(charVec);
    print(charSet);
    print(charUnorderedSet);

    std::unordered_set<std::string>emailList = {"anon@gmail.com", "johndoe@gmail.com", "janedoe@yahoo.com"};
    emailList.insert("kanglee@gmail.com");
    emailList.insert("johndoe@gmail.com");
    // emailList.erase("anon@gmail.com");

    print(emailList);
    
    std::cout << emailList.size() << std::endl;
    std::cout << emailList.count("johndoe@gmail.com") << std::endl;
    std::cout << emailList.count("anon@gmail.com") << std::endl;

    return 0;
}