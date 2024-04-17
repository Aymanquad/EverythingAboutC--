// dynamic memory Memory that is allocated after the program is already compiled & running.
// Use the **'new'** operator to allocate memory in the heap rather than the stack.
// Useful when we don't know how much memory we will need. 
// Makes our programs more flexible, especially when accepting user input.

#include<iostream>

int main(int argc, char const *argv[])
{
    char *pGrades = nullptr;
    int size;

    std::cout << "enter the size you want : \n" ;
    std::cin >> size ;

    pGrades = new char[size];

    for(int i = 0 ; i<size ; i++){
        std::cout << "Enter the " << i+1 << " grade:\n";
        std::cin >> pGrades[i];
    }

    for(int i = 0 ; i<size ; i++){
        std::cout << pGrades[i] << " "; 
    }




    return 0;
}
