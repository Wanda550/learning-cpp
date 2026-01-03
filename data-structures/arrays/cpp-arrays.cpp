#include <iostream>

using namespace std;

// arrays
int main() {
   // declaring variables
   int tipOption1 = 12;
   int tipOption2 = 15;
   int tipOption3 = 18;

   int tipOptions[3];

   // setter method
   tipOptions[0] = tipOption1;
   tipOptions[1] = tipOption2;
   tipOptions[2] = tipOption3;

   // getter
   cout << "Tip option 1: " << tipOptions[0] << endl;
   cout << "Tip option 2: " << tipOptions[1] << endl;
   cout << "Tip option 3: " << tipOptions[2] << endl;

   // initailising method
   const int scores[4] = {84, 36, 91, 64};

   cout << "Test score 1: " << scores[0] << endl;
   cout << "Test score 2: " << scores[1] << endl;
   cout << "Test score 3: " << scores[2] << endl;
   cout << "Test score 4: " << scores[3] << endl;

   // size of array in bytes
   cout << sizeof(scores) << endl;
   cout << sizeof(scores[3]) << endl;

   // to see the size of the elements inside the array you need a bit of maths
   cout << sizeof(scores) / sizeof(scores[0]) << endl;

   // using a for loop to display the scores in the scores array
   for(int score : scores) {
    cout << "Test score: " << score << endl;
   }
}