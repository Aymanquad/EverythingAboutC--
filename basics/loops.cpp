#include <iostream>

int main() {
    // while loop
    int count = 0;
    while (count < 5) {
        std::cout << "Count: " << count << std::endl;
        count++;
    }

    //do-while loop
    int num = 0;
    do {
        std::cout << "Number: " << num << std::endl;
        num++;
    } while (num < 5);

    //for loop
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteration: " << i << std::endl;
    }

    //foreach loop , it eases the traversal over iterable data sets such as arrays.
    // just add a : in a for loop as follows....

    int grades[] = {65, 72, 81, 93};
    
    for(int grade : grades) {
        std::cout << grade << '\n';
    }

    return 0;
}
