// Vectors in C++ are a dynamic array-like data structure provided by the Standard Template Library (STL).
// They can **dynamically resize** themselves to accommodate any number of elements, and they offer many convenient 
// functions for manipulation.


#include <iostream>
#include <vector>

int main() {
    // Declaration
    std::vector<int> vec;

    // Adding elements
    for (int i = 0; i < 5; ++i) {
        vec.push_back(i * 2);
    }

    // Accessing
    std::cout << "Vector elements: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;




    // Important functions related to vectors:

    // size() - Returns the number of elements in the vector
    std::cout << "Number of elements in the vector: " << vec.size() << std::endl;

    // push_back() - Adds an element to the end of the vector
    vec.push_back(10);
    std::cout << "Added element to the vector." << std::endl;

    // pop_back() - Removes the last element from the vector
    vec.pop_back();
    std::cout << "Removed last element from the vector." << std::endl;

    // Adding an element to the front
    vec.insert(vec.begin(), 1);

    // Removing the first element
    vec.erase(vec.begin());

    // Accessing individual elements
    std::cout << "Element at index 2: " << vec[2] << std::endl;

    // Modifying individual elements
    vec[2] = 15;
    std::cout << "Modified element at index 2: " << vec[2] << std::endl;

    return 0;
}