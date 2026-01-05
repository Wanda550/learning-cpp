#include <iostream> //also includes <sting>

// importing the string class
#include <string>

// strings in cpp are not primitive data types
// a string is actually a class (a more complex data type)
// since it is a class in cpp you have to import it

int main() {
    // C++, originally called "C with Classes"
    // in C a string = array of characters
    // with a class string you have more functionality

    std::string myName = "Wanda";

    // declaring with constructor method
    std::string mySurname("Limela");

    // array of characters that form a string
    std::string myCar = {'K', 'i', 'a'}; // c string
    
    std::cout << myName << " " << mySurname << std::endl;
    std::cout << myCar << std::endl;

     // displaying the character of the string myCar in index 0
    std::cout << myCar[0] << std::endl;
    std::cout << myCar.at(0) << std::endl;

    // displaying the length of the string myCar
    std::cout << myCar.length() << std::endl;

    // displaying if the string myCar is empty or not
    std::cout << (myCar.length() == 0) << std::endl;
    std::cout << (myCar == "") << std::endl;
    std::cout << myCar.empty() << std::endl;

    // displaying the second last character in the string myCar
    std::cout << myCar[myCar.length()-1] << std::endl;

    // displaying the first and last character in the string myCar using front and back function
    std::cout << myCar.front() << std::endl;
    std::cout << myCar.back() << std::endl;

    // strings in C++ are mutable (directly modifyable)
    // that you edit, and add character to each individual character and the string will still be the same string
    // in other languages you would have to create another string everytime you want to add more characters
    myName[1] = '@';
    myName += '!';
    myName += "C++";

    // in other languages
    myCar = myCar + " Niro";

    std::cout << myName << std::endl;
    std::cout << myCar << std::endl;

    // you can also use built-in function in C++
    myCar.push_back('!'); // add the character '!' at the back of the string -> +=

    myCar.append(5, '*'); // add the character '*' at the back of the string 5 times

    myCar.insert(0, "AAAAA"); // insert the string 'AAAAA' at the index 0

    myName.pop_back(); // delete the last character of the string 

    myName.erase(5, 3); // just like insert you can delete a character at the specified index
   
    std::cout << myCar << std::endl;
    std::cout << myName << std::endl;
}