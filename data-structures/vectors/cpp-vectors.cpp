#include <iostream>
#include <string>

// importing the vector class and is part of the standard library
#include <vector>


// a vector in C++ is a dynamic array
// a dynamic array is similar to an array except that it can resize add and delete
int main() {
    
  // declaring the vector
  std::vector<int> tickets = {1000, 2005, 1550};

  // adding a value to the vector (at the back of the vector)
  tickets.push_back(1025);

  // inserting a value to the vector (at the specified index)
  tickets.insert(tickets.begin() + 1, 2300);
  tickets.insert(tickets.end(), 5000);

  // adding a value to the vector (at the back of the vector)
  tickets.pop_back();

  // inserting a value to the vector (at the specified index)
  tickets.erase(tickets.begin() + 3);
  tickets.erase(tickets.end() - 1);

  // displaying the size of the vector 
  std::cout << tickets.size() << std::endl;

  // displaying value in the vector at the specified index
  std::cout << tickets[0] << std::endl;
  std::cout << tickets.at(1) << std::endl;

  // displaying the last value in the vector
  std::cout << tickets[tickets.size() - 1] << std::endl;
  std::cout << tickets.back() << std::endl;

  // displaying the first value in the vector
  std::cout << tickets.front() << std::endl;

  // displaying if the vector is empty
  std::cout << (tickets.size() == 0) << std::endl;
  std::cout << tickets.empty() << std::endl;

  // for loop to print all the values in the vector
  for(int ticket : tickets) {
    std::cout << "Ticket: " << ticket << std::endl;
  }

  // clear the vector
  tickets.erase(tickets.begin(), tickets.end());
  tickets.clear();

  for(int ticket : tickets) {
    std::cout << "Ticket: " << ticket << std::endl;
  }
}