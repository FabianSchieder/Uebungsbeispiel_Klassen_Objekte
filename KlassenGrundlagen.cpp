#include <iostream>
#include "Car.h"
using namespace std;

class Pen
{
private:
    string color;
    int size;

public:
    
    Pen(string color = "red", int size = 27)
    {
        this->color = color;
        this->size = size;
    }

    void draw(string shape)
    {
        cout << "Drawing a " << color << " " << shape << " with size " << this->size << endl;
    }
};

int main()
{
   // Pen pen("yellow", 42);
   // pen.draw("triangle");
   // pen.draw("square");
   //
   // Pen pen2("green", 27);
   // pen2.draw("line");
   
    Car car;
    car.accelerate(2.7f);
    car.move(3.0f);

    cout << "isMoving: " << car.isMoving() << endl;
    car.brake();

    cout << "isMoving: " << car.isMoving() << endl;
    cout << "Position: " << car.getPosition() << endl;


    

    return 0;
}