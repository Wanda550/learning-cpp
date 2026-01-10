#include <iostream>
#include <cstdlib>  // rand, srand
#include <ctime>    // time

int main () {

    char tictactoe[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '},
    };

    int playerRow;
    int playerColumn;
    int oppRow;
    int oppColumn;
    srand(time(0));           // Seed the random number generator

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter the block you want to play(0-2): " << std::endl;
        std::cout << "Row: ";
        std::cin >> playerRow;
        std::cout << "Column: ";
        std::cin >> playerColumn;

        int oppRow = (rand() % 3);  // Range: 0 to 2
        int oppColumn = (rand() % 3);  // Range: 0 to 2

        if (tictactoe[i][i] != 'X' || tictactoe[i][i] != 'O') {
            tictactoe[playerRow][playerColumn] = 'X';
            tictactoe[oppRow][oppColumn] = 'O';
        }

        if (tictactoe[0][0] == 'X' && tictactoe[0][1] == 'X' && tictactoe[0][2] == 'X') {
            std::cout << "Congratulations! You win." << std::endl;
            break;
        } else if (tictactoe[0][0] == 'X' && tictactoe[0][1] == 'X' && tictactoe[0][2] == 'X') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[1][0] == 'X' && tictactoe[1][1] == 'X' && tictactoe[1][2] == 'X') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[2][0] == 'X' && tictactoe[2][1] == 'X' && tictactoe[2][2] == 'X') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[0][0] == 'X' && tictactoe[1][0] == 'X' && tictactoe[2][0] == 'X') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[0][1] == 'X' && tictactoe[1][1] == 'X' && tictactoe[2][1] == 'X') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[0][2] == 'X' && tictactoe[1][2] == 'X' && tictactoe[2][2] == 'X') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[0][0] == 'X' && tictactoe[1][1] == 'X' && tictactoe[2][2] == 'X') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[2][0] == 'X' && tictactoe[2][1] == 'X' && tictactoe[2][2] == 'X') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        }

        if (tictactoe[0][0] == 'O' && tictactoe[0][1] == 'O' && tictactoe[0][2] == 'O') {
            std::cout << "Congratulations! You win." << std::endl;
            break;
        } else if (tictactoe[0][0] == 'O' && tictactoe[0][1] == 'O' && tictactoe[0][2] == 'O') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[1][0] == 'O' && tictactoe[1][1] == 'O' && tictactoe[1][2] == 'O') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[2][0] == 'O' && tictactoe[2][1] == 'O' && tictactoe[2][2] == 'O') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[0][0] == 'O' && tictactoe[1][0] == 'O' && tictactoe[2][0] == 'O') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[0][1] == 'X' && tictactoe[1][1] == 'O' && tictactoe[2][1] == 'O') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[0][2] == 'O' && tictactoe[1][2] == 'O' && tictactoe[2][2] == 'O') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[0][0] == 'O' && tictactoe[1][1] == 'O' && tictactoe[2][2] == 'O') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        } else if (tictactoe[2][0] == 'O' && tictactoe[2][1] == 'O' && tictactoe[2][2] == 'O') {
            std::cout << "Congratulations! You won." << std::endl;
            break;
        }

        std::cout << "Your opponent chose the block: " << std::endl;
        std::cout << "Row: " << oppRow << std::endl;
        std::cout << "Column: " << oppColumn << std::endl; 

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << tictactoe[i][j] << " ";
            }
            std::cout << std::endl;
        };
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << tictactoe[i][j] << " ";
        }
        std::cout << std::endl;
    };
}