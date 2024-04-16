#include<iostream>

int main(int argc, char const *argv[])
{
    //----ternary operator(?:)-----
    int grade = 50;
    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    int number = 9;
    number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    //-----Logical Operators(&& , ! , ||)-----

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
    std::cout << !something << "\n"; // !op.

    //-----sizeof() op.----- , it basically returns the amout of bytes req. to store anything such as variables,data types , classes , etc.
    std::string students[] = {"habibi" , "chad" , "bilal"};
    std::cout << sizeof(students)/sizeof(std::string) << " elements \n";
    

    // ----- fill() ----- = Fills a range of elements with a specified value (as the name suggests)
    // syntax ... fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    //just having the food array filled with 3 diff items...
    fill (foods, foods + (SIZE/3), "pizza");
    fill (foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill (foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    for(std::string food : foods) {
    std::cout << food << '\n';
    }

    //----- address-of operator (&) ----- , returns the hexadecimal addr of the given variable
    int marks = 92;
    std::cout << &marks << "\n";

    return 0;
}