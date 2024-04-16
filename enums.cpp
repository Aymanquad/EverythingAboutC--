// enums = a user-defined data type that consists of paired named-integer constants.
//         GREAT if you have a set of potential options

#include <iostream>

//other examples...
enum Flavor {vanilla, chocolate, strawberry, mint};

enum Color {red, orange, yellow, green, blue, purple};

enum Planet {mercury = 4880, venus = 12104, earth = 12756,
            mars = 6794, jupiter = 142984, saturn = 108728,
            uranus = 51118, neptune = 49532, pluto = 2320};


int main(int argc, char const *argv[])
{
    enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
              thursday = 4, friday = 5, saturday = 6};

    Day today = sunday;  //defined from our enum above

    switch (today)
    {
    case sunday:
        std::cout << "its a Sunday!!\n"; 
        break;
    case monday:
        std::cout << "its a Monday!!\n"; 
        break;
    case tuesday:
        std::cout << "its a tueday!!\n"; 
        break;
    case wednesday:
        std::cout << "its a wednesday!!\n"; 
        break;
    case thursday:
        std::cout << "its a thursday!!\n"; 
        break;
    case friday:
        std::cout << "its a Friday!!\n"; 
        break;
    case saturday:
        std::cout << "its a Saturday!!\n"; 
        break;
    
    default:
        break;
    }


    return 0;
}
