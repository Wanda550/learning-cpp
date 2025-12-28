#include <iostream>

// C++ import statement for math functions
#include <cmath>

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
    std::cout << "Num (addition x + x): " << num << std::endl;

    // shorthand way of arithmetic operations
    num += 5;
    std::cout << "Num (addition += shorthand): " << num << std::endl;  

    // if you want to add 1 you can use the increment operator
    // preffered way if you only need to add 1
    num++;
    std::cout << "Num ++ increment: " << num << std::endl;

    // if you want to subtract 1 you can use the decrement operator
    // preffered way if you only need to subtract 1
    num--;
    std::cout << "Num -- decrement: " << num << std::endl;

    //remainder of any division
    int remainder = num %= 5; 
    std::cout << "Num % modulo 5: " << remainder << std::endl;

    // arithmetic operations have an order of presidence
    // parenthesis -> multiplication & division -> addition & subtraction
    int students = 6 + (8 - 5) * 3 / 4;
    std::cout << "Order of presidence for 6 + (8 - 5) * 3 / 4: " << students << std::endl;

    //useful math functions section

    double x = 3;
    double y = 4;
    double z;

    //maximum of two numbers function
    z = std::max(x, y);
    std::cout << "Maximum between x and y: " << z << std::endl;

    //minimum of two numbers function
    z = std::min(x, y);
    std::cout << "Maximum between x and y: " << z << std::endl;

    //power rule of two numbers function (to the power of the specific number)
    z = pow(x, y);
    std::cout << "Power of x to y (x^y): " << z << std::endl;
    
    //sqrt of two numbers function
    z = sqrt(82);
    std::cout << "Square root of 82: " << z << std::endl;

    //absolute value rule of a number (the value that the number is away from zero)
    z = abs(-4);
    std::cout << "Absolute value of -4: " << z << std::endl;

    //round rule for a decimal value 
    z = round(3.14);
    std::cout << "rounded value of 3.14: " << z << std::endl;

    //round up (no matter the value of the demal numbers) rule for a decimal value 
    z = ceil(3.14);
    std::cout << "rounded up value of 3.14: " << z << std::endl;

    //round down (no matter the value of the demal numbers) rule for a decimal value 
    z = floor(3.14);
    std::cout << "rounded up value of 3.14: " << z << std::endl;

    return 0;
}