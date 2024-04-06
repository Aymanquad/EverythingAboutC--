#include<iostream>

int main(int argc, char const *argv[])
{
    //int = (store whole nums)
    int x = 10;
    int y = 12.4; // the .4 is truncated

    std::cout << x << "\n";
    std::cout << y << "\n";

    //double (store decimals as well)
    double z = 13.67;
    std::cout << z << "\n";

    //char = Store SINGLE characters only
    char Grade = 'A';
    char Err = 'abc'; 

    std::cout << Grade << "\n";
    std::cout << Err << "\n"; // returns c only

    //boolean (true or false)
    bool bit_value = true;
    std::cout << bit_value << "\n";

    //string (Objects representing a sequence of texts)
    std::string name = "Habibi";
    std::string car = "lamborghini";
    std::string place = "dubai";

    std::cout << name << " loves to go to " << place << " in his " << car << "\n" ;


    return 0;
}
