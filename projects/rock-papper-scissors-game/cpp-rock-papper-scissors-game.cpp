#include <iostream>
#include <cctype>
#include <cstdlib>  // rand, srand
#include <ctime>    // time

int main () {

    char choice;
    char opponentChoice;

    srand(time(0));           // Seed the random number generator

    int randomNumber = (rand() % 3) + 1;  // Range: 1 to 3

    switch (randomNumber) {
        case 1:
           opponentChoice = 'R';
           break;
        case 2:
           opponentChoice = 'P';
           break;
        case 3:
           opponentChoice = 'S';
           break;
    }

    std::cout << "Enter your weapon of choice (R for Rock, P for paper, S for Scissors): ";
    std::cin >> choice;

    choice = std::toupper(choice);

    while (choice != 'R' && choice != 'P' && choice != 'S') {
       std::cout << "Your input is invalid please enter (R for Rock, P for paper, S for Scissors): "; 
       choice = std::toupper(choice);
    }

    std::cout << "Your weapon of choice " << choice << std::endl;
    std::cout << "Your opponent's weapon of choice: "<< opponentChoice << std::endl;

    if (choice == opponentChoice) {
        std::cout << "Its a tie";
    } else if (choice == 'R' && opponentChoice == 'S') {
        std::cout << "Congratulations! you win";
    } else if (choice == 'R' && opponentChoice == 'P') {
        std::cout << "Sorry! you lose";
    } else if (choice == 'P' && opponentChoice == 'R') {
        std::cout << "Congratulations! you win";
    } else if (choice == 'P' && opponentChoice == 'S') {
        std::cout << "Sorry! you lose";
    } else if (choice == 'S' && opponentChoice == 'P') {
        std::cout << "Congratulations! you win";
    } else if (choice == 'S' && opponentChoice == 'R') {
        std::cout << "Sorry! you lose";
    }

    switch (choice) {
    case 'R':
        std::cout << (opponentChoice == 'S' ? "You win" : "You lose");
        break;
    case 'P':
        std::cout << (opponentChoice == 'R' ? "You win" : "You lose");
        break;
    case 'S':
        std::cout << (opponentChoice == 'P' ? "You win" : "You lose");
        break;
    }

    return 0;
}