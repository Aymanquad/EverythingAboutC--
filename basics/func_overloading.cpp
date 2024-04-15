//         Function overloading is a feature of object-oriented programming where two or more functions
//  can have the *same name but different parameters* . When a function name is overloaded with different 
//  jobs it is called Function Overloading. In Function Overloading “Function” name should be the same and 
//  the arguments should be different. Function overloading can be considered as an example of a polymorphism
//   feature in C++

#include <iostream>
void makePizza();
void makePizza (std::string topping1);
void makePizza(std::string topping1, std::string topping2);


int main()
{
    makePizza("pepperoni", "mushroom"); //calls the last makePizza func with 2 params.
    return 0;
}

void makePizza () {
    std::cout << "Here is your pizza!\n";
}
void makePizza (std::string topping1){
    std::cout << "Here is your "<< topping1 << " pizza!\n";
}
void makePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your "<< topping1 << " and " << topping2 << " pizza! \n";
}