#include <iostream>
#include <string>

// whiles loop are used to repeat a block of code 
// an unspecified number of times until a condition is met
// do while loop executes code first, and then checks the condition
// do while loop guarentees at least one iteration

int main() {
  std::string guessword = "Kenny";
  std::string guess;

  int guessTurn = 1;

  while (true) {
    std::cout << guessTurn++ << ": " << "Enter a guess word (q to quit): ";
    std::cin >> guess;

    if(guess == guessword) {
        std::cout << "CORRECT! you guessed the word right" << std::endl;
        break;
    } else if (guess == "q") {
        std::cout << "You quit the game" << std::endl;
        break;
    }
    else {
        std::cout << "WRONG! you guessed the word incorrect" << std::endl;
    }
  }

  // this is also possible with a do while loop
  do{
    std::cout << "Enter a guess word (q to quit): ";
    std::cin >> guess;

    if (guess == "q") {
        std::cout << "You quit the game" << std::endl;
        break;
    } else if (guess == guessword) {
        std::cout << "CORRECT! you guessed the word right" << std::endl;
        break;
    } else {
        std::cout << "WRONG! you guessed the word incorrect" << std::endl;
    }   
  } while (guess != guessword);

}