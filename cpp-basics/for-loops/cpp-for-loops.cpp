#include <iostream>
#include <vector>

// for loops - iteration (repetitions)
// for loops are used to repeat a task a specific number of times

// 3S = start, stop, step
int main() {

    std::vector <int> grades = {49, 85, 96, 88, 94};

    // for loop to countdown from 0 to 9
    for(int i = 0; i < 10; i++) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    // for loop to countdown from 9 to 0
    for(int i = 9; i >= 0; i--) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    //factorial a product of all numbers in a value
    int factorial = 1;
    int n;
    
    std::cout << "Input a number you want to see the factorial of: ";
    std::cin >> n;

    for (int j = 1; j <= n; j++) {
       factorial *= j; 
    }

    // displatying the factoirial
    std::cout << n << "! factorial = " << factorial << std::endl;

    std::cout << "BEFORE " << std::endl;
    // iterating through a vector to display all the numbers in the vector
    for (size_t i = 0; i < grades.size(); i++) {
        std::cout << grades[i]  << " ";
    }

    std::cout << std::endl;

    // 5 points to each score
    for (size_t i = 0; i < grades.size(); i++) {
        grades[i] += 5;
        
        if(grades[i] > 100) {
            grades[i] = 100;
        }
    }

    std::cout << "AFTER " << std::endl;
    // iterating through a vector to display all the numbers in the vector
    for (size_t i = 0; i < grades.size(); i++) {
        std::cout << grades[i]  << " ";
    }

    std::cout << std::endl;
    
}