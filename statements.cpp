#include <iostream>

int main() {
    //if-else statement
    int number = 10;

    if (number > 0) {
        std::cout << "Number is positive." << std::endl;
    } else if (number == 0) {
        std::cout << "Number is zero." << std::endl;
    } else {
        std::cout << "Number is negative." << std::endl;
    }

    //switch statement
    char grade = 'B';

    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Good job!" << std::endl;
            break;
        case 'C':
            std::cout << "Could do better." << std::endl;
            break;
        case 'D':
            std::cout << "Needs improvement." << std::endl;
            break;
        default:
            std::cout << "Invalid grade." << std::endl;
    }

    return 0;
}
