#include <iostream>
#include <string>
#include <vector>

// multi arrays / nested arrays (arrays containing arrays)
// 2d arrays = matrix
// important if you want to store data or represent tables/grid 
int main () {

   std::string currencies[7][7] = {
        {"USA", "USD", "DOLLAR"},
        {"EUROPE", "EUR", "EURO"},
        {"JAPAN", "JPY", "YEN"},
        {"BRITAIN", "GBP", "BRITISH POUND"},
        {"CHINA", "CNY", "YUAN"},
        {"SWITZARLAND", "CHF", "SWISS FRANC"},
        {"CANADA", "CAD", "CANADIAN DOLLAR"}
   };

   for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << currencies[i][j] << " ";
        }
        std::cout << std::endl;
   };

   char tictactoe[3][3] = {
        {' ', 'X', ' '},
        {'O', 'X', 'O'},
        {' ', ' ', 'O'}
   };

   tictactoe[0][2] = 'X';

   for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << tictactoe[i][j] << " ";
        }
        std::cout << std::endl;
   }

   // 2d vector
   // are like arrays but can resize
   std::vector <std::vector<std::string>> studentClass = {
    {"Chemistry", "Algebra", "English"}, 
    {"French"}, 
    {"Chemistry", "Physics"},
    {"English", "Economics", "Statistics"},
   };

   studentClass[1].push_back("Mathematics");

   for (size_t i = 0; i < studentClass.size(); i++) {
        for (int j = 0; j < studentClass[i].size(); j++){
            std::cout << studentClass[i][j] << " ";
        }
        std::cout << std::endl;
   };

}