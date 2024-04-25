// Queues are another fundamental data structure that follows the First In, First Out (FIFO) principle,
// meaning the first element added to the queue is the first one to be removed. 
// They support two main operations: enqueue (to add an element to the back of the queue) and dequeue (to remove the front element from the queue).

#include <iostream>
#include <queue>

int main() {
    // Declaration
    std::queue<int> myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    std::cout << "Queue elements: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    // Important functions related to queues:

    // 1. push() - Adds an element to the back of the queue
    // 2. pop() - Removes the front element from the queue
    // 3. front() - Returns a reference to the front element of the queue
    // 4. back() - Returns a reference to the back element of the queue
    // 5. empty() - Checks if the queue is empty
    // 6. size() - Returns the number of elements in the queue

    return 0;
}