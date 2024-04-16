// A getter makes a private attribute Readable.
// A setter makes a private attribute Writable.
// Both of these r used in Abstraction(whr u don't want ur data to be seen by unwanted users)

#include<iostream>

class Person{
    private:
        std::string name ;
        int age = 18;

    public:
        // Getter for name
        std::string getName(){
            return name;
        }

        // Setter for name
        void setName(std::string newName) {
            name = newName;
        }

        // Getter for age
        int getAge(){
            return age;
        }

        // Setter for age
        void setAge(int newAge) {
            if (newAge >= 0) {
                age = newAge;
            } else {
                std::cerr << "Age cannot be negative" << std::endl;
            }
        }
};

int main() {
    Person person;

    person.setName("John");
    person.setAge(30);

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    person.setAge(-5);

    return 0;
}