#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout <<  "I like call of duty"  << "\n" ;        //std::cout = standard char o/p 
    std::cout <<  "Its dope"  << std::endl  ;    // both do the same thing , just that std::endl flushes o/p buffer
    
    // << is insertion operator
    // >> is extraction operator

    std::string name ;
    int age;
    
    std::cout << "whats your age ? : ";
    std::cin >> age;


    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);    //getline is used in order to get more than just 1 word , and >>std::ws removes any whitespaces/gaps .
    
    
    std::cout << "Your name & age is " << name << " , " << age;
    
    return 0;
}
