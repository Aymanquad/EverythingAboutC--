// Arrays is a data structure which is used to store heterogeneous(same) type of data together.

//can be created using [] brackets just after the variable name and are stored in {} .

#include<iostream>

int main(int argc, char const *argv[])
{
    std::string cars[] = {"koenigsegg" , "mustang" , "dodge"};
    std::cout << cars[1]; // accessing indexes

    //can also be declared earlier and items inside can be defined later on .
    return 0;
}
