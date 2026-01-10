#include <iostream>

int main() {
    int studentGrades[5] = {94, 89, 85, 96, 93};

    std::cout << studentGrades << std::endl;
    std::cout << studentGrades[0] << std::endl;
    std::cout << 2[studentGrades] << std::endl;
    std::cout << &(studentGrades[1]) << std::endl;

    int* pStudentGrades = studentGrades; // assign an array to a pointer

    std::cout << pStudentGrades << std::endl;
    std::cout << *pStudentGrades << std::endl;

    // final address = starting address + index*size
    // array[index] = *(array + index)
    // index[array] = *(index + array)
    std::cout << studentGrades[2] << std::endl;
    std::cout << *(studentGrades + 2) << std::endl;  // pointer arithmetic

    std::cout << 2[studentGrades] << std::endl;
    std::cout << *(2 + studentGrades) << std::endl;  // pointer arithmetic

    for(int i =0; i < 5; i++) {
        std::cout << i << ": " << studentGrades[i] << " "  << i[studentGrades] << " "
          << *(pStudentGrades + i) << " " << " " << *(i + pStudentGrades) << std::endl;
    }

    // std::cout << "pStudentGrades++: " << *(pStudentGrades++) << std::endl;
    // std::cout << "pStudentGrades--: " << *(pStudentGrades--) << std::endl;

    for(int i =0; i < 5; i++) {
        std::cout << i << ": " << pStudentGrades << " "  << *(pStudentGrades++) << std::endl;
    }

    std::cout << pStudentGrades << std::endl; // out of the range of the array do not change value do unsafe behaviour
}