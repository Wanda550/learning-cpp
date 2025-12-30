#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //declaring the variables
    double x, y, z;

    // prompts to get the values of the sides
    cout << "Enter the length(in mm) of the opposite side: ";
    cin >> x;
    cout << "Enter the length(in mm) of the adjacent side: ";
    cin >> y;

    // formula to find hypotenuse
    z = sqrt((pow(x, 2)) + (pow(y, 2)));

    cout << "The length of the hypotenuse side is: " << z << endl;
}