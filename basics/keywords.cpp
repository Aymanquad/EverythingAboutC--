// const allows us to create unchangeble data objects just like in js . 

// namespaces are used to prevent naming conflicts of varoius different entities that are being used in a multiple 
// same variable name env .  same named vars can be present only if they exist in diff. namespaces . 

// typedef is used to give a name for an existing type (shrtcut) . but we simple use 'using' more often .

#include<iostream>
#include<vector>


// typedef std::string str_t;
using str_t = std::string ; 

namespace first{
    int x = 10;
}

namespace second{
    int x = 20;
}

int main(int argc, char const *argv[])
{
    // can also be done using this if u have too many values to take from other entity (basically shrtcut)...
    using namespace second;
    // int x = 30;

    std::cout << first::x << "\n";    // returns us the value of x from first using the scope-resolution-operator(::)

    std::cout << x << "\n";           // returns value of x from  second namespace
    
    str_t msg = "hello";
    std::cout << msg << "\n";

    return 0;
}
