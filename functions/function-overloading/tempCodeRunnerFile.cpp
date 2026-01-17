#include <iostream>
#include <string>
#include <vector>

int multiply(int a, int b);
double multiply(double a, double b);
int multiply(int a, int b, int c);
int multiply(int numbers[], int n);

// function overloading = polymorphic function (poly = many, morph = forms)
// fuction overloading allows us to create a multiple function with the same name
// no two functions of the same name can have the same exact signature

int main() {