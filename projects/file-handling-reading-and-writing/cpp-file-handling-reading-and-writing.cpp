#include <iostream>
#include <fstream> //file stream
#include <map>
#include <string>  //includes <cctype>

// "harry-potter-book-blurb.txt" contains text about the first Harry Potter book
// write a program to read the text file, and create a new text file called "word-count.txt"
// the file contains the list of unique words (case insensitive)
// skip non alphabet characters, and remove any non alphabetical characters.
// e.g. spells, should just be spell

int main() {

    std::ifstream inputFile("harry-potter-book-blurb.txt");
    std::map<std::string, int> wordMap;
    if (inputFile.is_open()) {
        std::string word;
        int lineNumber = 1;
        while (inputFile >> word) {
            for (size_t i = 0; i < word.size(); i++) {
                word[i] = tolower(word[i]);
            }
            
            while (!word.empty() && !isalpha(word[word.size()-1])) {
                word.pop_back();
            }

            if (!word.empty()) {
                if (wordMap.count(word) == 0) {
                    wordMap[word] = 0;
                }
                wordMap[word] += 1;
            }
            std::cout << lineNumber++ << ". " << word << std::endl;
        }
    }
    inputFile.close();

    std::ofstream outputFile("word-count.txt");

    if (outputFile.is_open()) {
        outputFile << wordMap.size() << std::endl;
        for (const auto &[word, wordCount] : wordMap) {
            outputFile << word << " " << wordCount << std::endl;
        }
    }
    outputFile.close();
}