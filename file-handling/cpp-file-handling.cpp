#include <iostream>
#include <fstream>
#include <string>

// fstream - include read(ios::in), write(ios::out), append(ios::app) modes
// ofstream - include write only(will overwrite the file if it already exits)
// ifstream - read only

int main() {

    // std::fstream myFile;
    // std::ofstream myFile;
    std::ifstream myFile;

    myFile.open("sample.txt", std::ios::in);

    /*  
    if(myFile.is_open()) {
        myFile << "slumlordv2 the world's tyrant" << std::endl;
    }
    */

    if(myFile.is_open()) {
        std::string line;
        int lineNumber = 1;

        while(getline(myFile, line)) {
            std::cout << lineNumber++ << ". " << line << std::endl;
        }
    }

    myFile.close();

    return 0;
}