#include<iostream>

int main(int argc, char const *argv[])
{
    //ternary operator(?:)
    int grade = 50;
    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    int number = 9;
    number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    //Logical Operators(&& , ! , ||)

    int temp;
    std::cout << "Enter the temperature:" ;
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){ // OR op.
    std::cout << "The temperature is bad!";
    }
    else{
    std::cout << "The temperature is good!";
    }

    if(temp <= 0 && number==9 ){ // AND op.
    std::cout << "Noicee day man!";
    }

    bool something = false;
    std::cout << !something << "\n"; //! op.

    return 0;
}