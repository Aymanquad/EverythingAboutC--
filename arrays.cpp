// Arrays is a data structure which is used to store heterogeneous(same) type of data together.

//can be created using [] brackets just after the variable name and are stored in {} .

#include<iostream>

int main(int argc, char const *argv[])
{
    std::string cars[] = {"koenigsegg" , "mustang" , "dodge"};
    std::cout << cars[1]; // accessing indexes

    //can also be declared earlier and items inside can be defined later on .
    
    
    
    // 2D arrays 
    std::string cars [] [3] = {{"Mustang", "Escape", "F-150"},
                                {"Corvette", "Equinox", "Silverado"},
                                {"Challenger", "Durango", "Ram 1500"}};
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns= sizeof(cars[0])/sizeof(cars[0][0]);
   
    for (int i = 0; i < rows; i++){
        for (int j = 0; j<columns; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }
    
    return 0;
}
