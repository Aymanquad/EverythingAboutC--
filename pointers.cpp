//  pointers are variables which point to certain addresses . easier to work with sometimes. and in arrays n lists , its always pointing to the 1st element .
// we need both   & address-of operator    and the   * dereference operator 

// A nullptr (null pointer) represnts a null pointer literal .
//  its always a good practise to keep the pointer assigned to nullptr when not pointing to any address.
// Note: Never deference a nullptr , as it leads to unknown behaviour .

#include<iostream>

int main(int argc, char const *argv[])
{
    std::string name = "Bro";
    int age = 21;
    std::string freePizzas [5] = {"pizza1", "pizza2", "pizza3", "pizza4","pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas; // no addressing req. as its already pointing to the address of the array (which is the 1st element)

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizzas << '\n';


    return 0;
}
