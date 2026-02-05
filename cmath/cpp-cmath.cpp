#include <iostream>
#include <cmath>

// math +, -, *, /;
// cmath min, max, abs, ceil, round, pow, sqrt
// other cmath log, sin, cos, tan, etc

int main() {
    int x = 3;
    int y = 4;
    double z = -4.778;

    std::cout << std::min(x, y) << std::endl;
    std::cout << std::max(x, y) << std::endl;
    std::cout << abs(z) << std::endl;
    std::cout << ceil(z) << std::endl;
    std::cout << floor(z) << std::endl;
    std::cout << round(z) << std::endl;
    std::cout << pow(x, y) << std::endl;
    std::cout << sqrt(x) << std::endl;

    
    return 0;
}