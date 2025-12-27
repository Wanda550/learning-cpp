// C++ import statement for input and output 
#include <iostream> 

// whenever we have modules or libraries we need to use the namespace
using namespace std;

// main function
// functions, loops and conditional statements are called block of code indicated by {}
int main() {

  // Variable declarations and initializations
  // numerical data types: int, float, double
  // character data type: char
  // string data type: string
  // const(constant) for values that cannot be changed
  // auto(automatically) lets the compiler determine the data type based on the assigned value(NOT RECOMMENDED just say the data type you already know it to be)

  const int num = 10; // Integer variable (whole numbers)
  float fprice = 20.5f; // Float variable (7 place precision)
  double dprice = 20.5; // Double variable (15 place precision)
  char dollar = '$'; // Character variable
  string hello = "Hello, World!"; // String variable
  bool hungry = true; // Boolean variable


  // Output of the values of the variables
  cout << "Integer: " << num << endl;
  cout << "Float: " << fprice << endl;
  cout << "Double: " << dprice << endl;
  cout << "Character: " << dollar << endl;
  cout << "String: " << hello << endl;
  cout << "Boolean: " << hungry << endl;

  // checking data types using typeid().name()
  // the function typeid().name() returns a string representing the data type of the variable
  cout << "Data type of num: " << typeid(num).name() << endl;
  cout << "Data type of fprice: " << typeid(fprice).name() << endl;
  cout << "Data type of dprice: " << typeid(dprice).name() << endl;
  cout << "Data type of dollar: " << typeid(dollar).name() << endl;
  cout << "Data type of hello: " << typeid(hello).name() << endl;
  cout << "Data type of hungry: " << typeid(hungry).name() << endl;

  // implicit type conversion (type conversion method of changing a variable's data type in programming) automatic
  int intFromDouble = dprice; // double to int (dropdecimal part)
  double doubleFromInt = num; // int to double (adds decimal part, NOTE the compiler does not show .0 but it is there)

  cout << "intFromDouble: " << intFromDouble << endl;
  cout << "doubleFromInt: " << doubleFromInt << endl;

  // explicit type casting (type casting a method of changing a variable's data type in programming) precede value with new data type
  int correct = 8; // int to bool (0 is false, any non-zero is true)
  int questions = 10; // bool to int (false is 0, true is 1)

  // double is an explicit way of type casting
  double score = correct/(double)questions * 100;

  cout << "score: " << score << endl;


  return 0;
};