// Stacks are a fundamental data structure that follows the Last In, First Out (LIFO) principle,
// meaning the last element added to the stack is the first one to be removed.
// They support two main operations: push (to add an element to the top of the stack) and pop (to remove the top element from the stack).

#include <iostream>
#include <stack>

int main() {
    // Declaration
    std::stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    std::cout << "Stack elements: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;

    

    // Important functions related to stacks:

    // size() - Returns the number of elements in the stack
    // push() - Adds an element to the top of the stack
    // pop() - Removes the top element from the stack
    // top() - Returns a reference to the top element of the stack
    // empty() - Checks if the stack is empty

    return 0;
}
