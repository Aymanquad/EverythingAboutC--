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

    return 0;
}
