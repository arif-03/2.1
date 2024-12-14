#include <iostream>
using namespace std;
class Rect
{
private:
    double length;
    double width;

public:
    double Rectangle(double length, double width)
    {
        
        return length * width;
    }
};

class Square
{
private:
    double side;

public:
    double Sq(double side)
    {
        return side * side;
    }
};

int main()
{
    double length = 20.0;
    double width = 6.0;
    double side = 6.0;
    Rect x;
    Square y;
    double rectangleArea= x.Rectangle(length, width);
    double squareArea = y.Sq(side);

    cout << "Area of Rectangle: " << rectangleArea << " square meters" << endl;
    cout << "Area of Square: " << squareArea << " square meters" << endl;

    return 0;
}