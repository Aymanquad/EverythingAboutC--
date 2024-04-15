#include <iostream>

int add(int a, int b) {
    return a + b;
    // return returns a value back at spot where we called the encompassing func()

}

int main() {
    int num1 = 5;
    int num2 = 7;

    // Calling func
    int sum = add(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
