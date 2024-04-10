#include<iostream>
// can be done implicitly or explicitly .


int main(int argc, char const *argv[])
{
    // Implicit (general way)
    int x = 8;
    int y = 12;
    char z = 'Habibi';

    //explicit way (example)

    //std::cout << x/y * 100 << "%";              //returns 0% cuz its of type int
    std::cout << x/(double)y * 100 << "%";         //returns 66.667% which is wt we want.


    return 0;
}
