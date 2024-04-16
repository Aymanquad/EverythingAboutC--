//Function Templates

// describes what a function looks like.
// Can be used to generate as many overloaded functions as needed, each using different data types

// instead of having diff and many overloaded functions doing the same thing ,
// just have single func() template for a single function so thats its flexible with all datatypes.

// #include<iostream>
// template <typename T , typename U>

// auto max(T x, U y){
//     return (x > y)?  x :  y ;
// }

// int main(int argc, char const *argv[])
// {
//     std::cout << max(2.1 , 8.57) << "\n";
//     std::cout << max("1" , "2") << "\n"; // does not give the max value in strings 
//     std::cout << max(2,8) << "\n";
//     return 0;
// }

#include <iostream>
#include <string>
template <typename T, typename U>

auto max(T x, U y) {                // the T , U accept any data type given to em . 'auto' keyword automatically flexes itslef according to our o/p.
    return (x > y) ? x : y;
}

int main(int argc, char const *argv[]) {
    std::cout << max(2.1, 8.57) << "\n";

    // std::cout << max("1" , "2") << "\n";    // does not give the max value 

    std::cout << max(std::string("2.1"), std::string("8.57")) << "\n";
    std::cout << max(2, 8) << "\n";
    return 0;
}



