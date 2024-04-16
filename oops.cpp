//Object = ** A collection of attributes and methods **
//          They can have characteristics and could peform actions
//          Can be used to mimic real world items 
//          Created from a class which acts as a "blue-print"

//constructor = A special method that is automatically called when an object is instantiated
//               useful for assigning values to attributes as arguments.

#include <iostream>

class Car{
    public:               //public access identifier
        //attrributes
        std::string make;
        std::string model;
        int year;
        std::string color;

        //constructor
        Car(std::string make ,std::string model , int year , std::string color){
            this->make = make;
            this->model = model;                        //whr the 'this' keyword represents to ur object using/calling this func()
            this->year = year;
            this->color = color;
        }

        //methods
        void accelerate() {
        std::cout << "You step on the gas!\n";
        }
        void brake() {
        std::cout << "You step on the brakes!\n";
        }
};

int main() {
    //Car car1;
    Car car2("Ford" , "Mustang" , 1998 , "light blue") ;    //using constructor
    
    // NOTE :: instead of assigning all these attributes manually like follows , we can simply use constructors.
    // car1.make = "Koeinesseg";
    // car1.model = "CC850";
    // car1.year = 2022;
    // car1.color = "silver";

    // std::cout << car1.make << ", " << car1.model << ", " << car1.year << std::endl;

    std::cout << car2.make << ", " << car2.model << ", " << car2.year << std::endl;

    car2.accelerate();
    car2.brake();


    //overloading constructors can also be created , where constructors share the same name and have diff. params
    // (same as func() overloading)
    return 0;
}
