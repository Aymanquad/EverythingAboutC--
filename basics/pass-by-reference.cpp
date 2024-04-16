#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";
    swap(x, y);
    std::cout << "X:" << x << '\n';
    std::cout << "Y:" << y << '\n';
    return 0;
}
                                             //as the COPIES of original values are passed down in func params rather than the value itself ,
void swap(std::string &x, std::string &y){   //they shld be passed by reference only in order to swap the values 
    std::string temp;                        
    temp = x;
    x = y;
    y = temp;
}