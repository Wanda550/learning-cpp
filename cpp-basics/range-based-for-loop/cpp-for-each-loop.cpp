#include <iostream>
#include <string>
#include <vector>

// for loops iterations
// for each loop (ranged based for loops)
// for each loops can't iterate backwards
// for each loops can't itarate through the vector and change the values
int main() {

   std::vector<int> grades = {49, 85, 96, 88, 94};
   std::string myName = "Wanda";
   std::vector<std::string> languages = {"English", "Portuguese", "Isizulu"};

   for(int grade : grades) {
        std::cout << grade << " ";
   }

   std::cout << std::endl;

   for(char letter : myName) {
        std::cout << letter << " ";
   }

   std::cout << std::endl;

   // in C++ when you create a temporary value like language and assign it myName you a creatin a copy of the string each timee
   // with non-primitive data types like string you do not need to create copies instaed use the same number by passing with reference &(const reference)
   // when working with primitive data types copying those values is very cheap but with non-primitive data types it becomes very expensive
   for(const std::string& language : languages) {
        std::cout << language << " ";
   }

   std::cout << std::endl;
}