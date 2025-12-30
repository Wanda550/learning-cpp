#include <iostream>

int main() {

   // and -> &&, or -> ||, not -> !

   //and if there is one false -> false; all true -> true
   //or if there is one false -> true; all false -> false
   //not if true -> false; if false -> true

   // declaring variables
   bool x = !true;
   bool y = true;
   std::string ans;

   // example of if statement turning 1 or 0 to "True" or "False" depending on the bool value
   if(x == 1){
    ans = "True";
   } else if(x == 0){
    ans = "False";
   }

   // displaying outputs
   std::cout << "Not true: " << ans << std::endl;
   std::cout << "x(false) and y(false): " << (x && y) << std::endl;
   std::cout << "x(false) or y(false): " << (x || y) << std::endl;

   // and &&, or ||, not !

   // comparisons <, <=, >, >=, ==, !=
   // <  --> less than
   // <= --> less than or equal to
   // >  --> more than
   // >= --> more than or equal to
   // == --> equal to
   // != --> not equal to

   int num = 10;

   std::cout << (x > 7) << std::endl;
   std::cout << (x >= 10) << std::endl;
   std::cout << (x < 15) << std::endl;
   std::cout << (x <= 10) << std::endl;
   std::cout << (x == 10) << std::endl;
   std::cout << (x != 11) << std::endl;

   int grade ='A';

   std::cout << "Enter the grade you got: " << std::endl;
   std::cin >> grade;

   if(grade >= 90){
      std::cout << "You got an A" << std::endl;
   }else if(grade >= 80 && grade <= 90) {
      std::cout << "You got a B" << std::endl;
   }else if(grade >= 70 && grade <= 80) {
      std::cout << "You got a C" << std::endl;
   }else if(grade >= 60 && grade <= 70) {
      std::cout << "You got a D" << std::endl;
   }else if(grade >= 50 && grade <= 60) {
      std::cout << "You got a E" << std::endl;
   }else if(grade >= 0 && grade <= 50) {
      std::cout << "You got a F" << std::endl;
   }else {
      std::cout << "Grade invalid" << std::endl;
   }

   return 0;
}