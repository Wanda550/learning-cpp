#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

// given 3 csv files containing student names nad their grades for exams 1, 2, and 3
// "stdent-grades1.csv", "student-grades2.csv", "student-grades3.csv"
// a program to read the csv files, and create csv file called "student-grades-final.csv"
// combines all files and list the student names in alphabetic order

void parseCsvFiles(const std::string& fileName, std::map<std::string, std::vector<int>>& studentGradeMap);

int main() {

    std::map<std::string, std::vector<int>> studentGradesMap;

    parseCsvFiles("student-grades1.csv", studentGradesMap);
    parseCsvFiles("student-grades2.csv", studentGradesMap);
    parseCsvFiles("student-grades3.csv", studentGradesMap);

    std::ofstream outputFile("student-grades-final.csv");
    if (outputFile.is_open()) {

        for (const auto& [student, grades] : studentGradesMap) {
            outputFile << student;

            for (int grade : grades) {
                outputFile << "," << grade;
            }

            outputFile << std::endl;
        }

    } else {
        std::cout << "Unable to open output file" << std::endl;
    }

    return 0;
}

void parseCsvFiles(const std::string& fileName, std::map<std::string, std::vector<int>>& studentGradeMap) {

    std::cout << fileName << std::endl;
    
    std::ifstream myFile(fileName);

    if(myFile.is_open()) {

        std::string line;

        while(std::getline(myFile, line)) {
            // std::cout << line << std::endl;

            std::stringstream ss(line);

            std::string student;
            std::getline(ss, student, ',');
            // std::cout << student << " ";
            studentGradeMap.insert({student, std::vector<int>{}});

            std::string grade;
            std::getline(ss, grade, ',');
            // std::cout << grade << std::endl;
            studentGradeMap[student].push_back(stoi(grade));
        }
    } else {
        std::cout << "Unable to open file " << fileName << std::endl;
    };

    myFile.close();
}