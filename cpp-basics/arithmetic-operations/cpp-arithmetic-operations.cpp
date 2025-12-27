#include <iostream>

int main() {

    // arithmetic operators (basic): +, -, *, and /
    // +: (addition) 
    // -: (subtraction)
    // *: (multiplication)
    // /: (division)
    // %: (modulo)

    // declare the variable
    int num = 80;
    
    // standard way of arithmetic operations
    num = num + 4;
    std::cout << num << std::endl;

    // shorthand way of arithmetic operations
    num += 5;
    std::cout << num << std::endl;  

    // if you want to add 1 you can use the increment operator
    // preffered way if you only need to add 1
    num++;
    std::cout << num << std::endl;

    // if you want to subtract 1 you can use the decrement operator
    // preffered way if you only need to subtract 1
    num--;
    std::cout << num << std::endl;

    //remainder of any division
    int remainder = num %= 5; 
    std::cout << remainder << std::endl;

    // arithmetic operations have an order of presidence
    // parenthesis -> multiplication & division -> addition & subtraction
    int students = 6 + (8 - 5) * 3 / 4;
    std::cout << students << std::endl;

    //useful math functions
    
    return 0;
}