#include <iostream>
#include <map> // include multimap
#include <unordered_map>
#include <string>

/*
    A map is a collection of key-value pairs: K -> V
        keys must be unique whereas the values do not have to be unique
        ex) dictionary, words are unique but definitions are not
            pricing, items are unique but prices are not
            counting, candidates are unique, count is not
    order -> by insertion, or by sorted
    in C++:
        similar to a set, a map is in sorted order
        If you dont care about sorted order, you can use an unordered_map it is not or ordered by insertion, nor sorted
    A vector is ordered by insertion (not sorted)
*/

int main() {

    std::map<std::string, float> fruits;
    fruits["apple"] = 1.10;

    // fruits["apple"] = 5.55;
    // fruits.at("apple") = 5.55;

    std::cout << fruits["apple"] << std::endl;
    // fruits.insert(std::pair<std::string, float>("banana", 1.50));
    // fruits.insert(make_pair("banana", 1.50));
    fruits.insert({"banana", 1.50});
 
    for(std::pair<std::string, float> fruit : fruits) {
        std::cout << fruit.first << " " << fruit.second << std::endl;
    }

    return 0;
}