#include <iostream>

// C++ import statement for strings
#include <string>

int main () {
  // declaring the variables
  std::string name;
  int age;

  std::cout << "What is your age? (in years)" << std::endl;
  // asking for input from the user using the character input function (cin)
  std::cin >> age;
  
  std::cout << "What is your full name?" << std::endl;
  // asking for input from the user using the character input function (cin)
  //std::cin >> name;

  // when asking a user to type in a string with a space in it the compiler stops reading that string breaking code
  // if we need to read a string that could contain a space in it we can use the getline function
  // std::ws will eliminate any new line or wide spaces in the buffer so the getline function is not skipped
  std::getline(std::cin >> std::ws, name);

  // displaying the input
  std::cout << "Hello " << name << "!" << std::endl;
  std::cout << "You are " << age << " years old." << std::endl;

  return 0;
}