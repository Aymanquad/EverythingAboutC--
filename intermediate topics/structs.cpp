// struct = A structure that group related variables under one name.
// structs can contain many different data types (string, int, char , etc )
// variables in a struct are known as "members"
// members can be access with '.' which is known as Class Member Access Operator

#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
    std::string address;
};

int main() {
    Person person1;

    person1.name = "John Doe";
    person1.age = 30;
    person1.address = "123 Main St, City, Country";

    Person person2;

    person2.name = "Jane Smith";
    person2.age = 25;
    person2.address = "456 Elm St, Town, Country";

    std::cout << "Person 1 Details:" << std::endl;
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Address: " << person1.address << std::endl;

    std::cout << std::endl; 

    std::cout << "Person 2 Details:" << std::endl;
    std::cout << "Name: " << person2.name << std::endl;
    std::cout << "Age: " << person2.age << std::endl;
    std::cout << "Address: " << person2.address << std::endl;


    //We can also pass structs as params to other func()s , which will act like a copy of the original.
    // if u wanna work on the original , use address of structs as params.
    //(same as to passing variables as params)

    return 0;
}
