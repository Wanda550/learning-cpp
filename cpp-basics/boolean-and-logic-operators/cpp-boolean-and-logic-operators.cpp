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

   return 0;
}