#include <iostream>
#include <string>
#include <vector>

class Person{

    protected:
        std::string firstName;
        std::string lastName;

    public:
    // constructor
    // Person(std::string firstName, std::string lastName): firstName(firstName), lastName(lastName) {};
    Person(std::string firstName, std::string lastName) {
        this->firstName = firstName;
        this->lastName = lastName;
    }

    Person() = default;

    // setter (mutator)
    void setFirstName(std::string firstName) {
        // first = firstName; is the same as 
        this->firstName = firstName;
    };

    // setter (mutator)
    void setLastName(std::string lastName) {
        // last = lastName; is the same as 
        this->lastName = lastName;
    };

    // getter (accessor)
    std::string getFullName() {
        return firstName + " " + lastName;
    };

    // void printFullName() {
    //      std::cout << firstName << " " << lastName <<std::endl;
    // };

    virtual void printInfo() {
        std::cout << "first name: " << firstName << std::endl;
        std::cout << "last name: " << lastName << std::endl;
        std::cout << "name: " << getFullName() << std::endl;
    };

    static void printPeople(std::vector<Person*> people){
        for(auto person : people) {
            person->printInfo();
        };
    }
};

// Parent class (Person)
// Child class (Employee)
class Employee : public Person {

    private:
        std::string department;

    public:
    Employee(std::string firstName, std::string lastName, std::string department) : Person(firstName, lastName), department(department) {};

    Employee() = default;

    std::string getDepartment() {
        return department;
    }

    void setDepartment(std::string department) {
        this->department = department;
    };

    void printInfo() override {
        std::cout << "first name: " << firstName << std::endl;
        std::cout << "last name: " << lastName << std::endl;
        std::cout << "name: " << getFullName() << std::endl;
        std::cout << "department: " << department << std::endl;
    };
};

// class describes the structure of the object
// object is a specific example of that stucture (instance)
// instance is another name for object
// instantiating is creating an object from a class
// data members are variables in the class
// methods are functions in the class


// the four main pillars of OOP (astraction is more of a concept and the other three(encapsulation, inheritance, and polymorphism) are example of abstraction)
// abstraction a concept of making something easy by hiding the complicated features
// encapsulation granting access to private data only through controlled public interfaces
// inheritance creating derived classes(children classes) that inherit properties from their parent classes
// polymorphism treating multiple different objects as their base object type

int main() {
    std::vector<Person*> people;

    // default
    Person p("slum", "lordv2");

    // without the abstraction the class variables would be in the public section
    // you assign values without a setter(mutator) like this
    // p.firstName = "slum";
    // p.lastName = "lordv2"; 

    Person p2;
    p2.setFirstName("kenny");
    p2.setLastName("lordv2");

    std::cout << p.getFullName() << std::endl;
    // p.printFullName(); this is a method(function in the class)
    std::cout << p2.getFullName() << std::endl;
    p2.printInfo();

    Employee e;
    e.setFirstName("akira");
    e.setLastName("worldWarrior");
    std::cout << e.getFullName() << std::endl;

    Employee e2("wanda", "lordv2", "programmer");
    // std::cout << e2.getFullName() << " " << e2.getDepartment() << std::endl;
    e2.printInfo();

    people.push_back(&p);
    people.push_back(&e);

    /*
    for(auto person : people) {
        person->printInfo();
    }*/

    Person::printPeople(people);

    return 0;
}