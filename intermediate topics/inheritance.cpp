// inheritance = A class can recieve attributes and methods from another class
//              Children classes inherit from a Parent class
//              Helps to reuse similar code found within multiple classes


#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;
    Cube (double side){
        this->side = side;
        this->area = side * side ;
        this->volume = side * side * side;
    };
};

class Sphere: public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * (3.14) * (radius * radius) ;
        this->volume = (4/3.0) * (3.141) * (radius * radius * radius);
    }

};

int main(int argc, char const *argv[])
{
    Sphere sphere(5);

    std::cout << sphere.area << " ,  " << sphere.volume << "\n";
    return 0;
}
