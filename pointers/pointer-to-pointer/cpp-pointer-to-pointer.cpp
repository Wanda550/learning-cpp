#include <iostream>

int main() {

    int savings = 50000;
    int* pSavings = &savings;
    int** ppSavings = &pSavings;

    std::cout << "Savings: " << &savings << " " << savings << std::endl;
    std::cout << "pSavings: " << &pSavings << " " << pSavings << " " << *pSavings << std::endl;
    std::cout << "ppSavings: " << &ppSavings << " " << ppSavings << " " << *ppSavings  << " " << **ppSavings << std::endl;

    int rowCount;
    int columnCount;

    std::cout << "Enter two numbers for row and column: " << std::endl;
    std::cout << "Row: ";
    std::cin >> rowCount;
    std::cout << "Column: ";
    std::cin >> columnCount;

    int** table = new int*[rowCount];

    for (int i = 0; i < rowCount; i++) {
        table[i] = new int[columnCount];
    };

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            // std::cout << table[i][j] << " ";
            std::cout << (*(*(table + i)+ j) = 1) << " ";
        };
        std::cout << std::endl;
    };
    std::cout << std::endl;

    for (int i = 0; i < rowCount; i++) {
        delete[] table[i];
        table[i] = nullptr;
    };
}