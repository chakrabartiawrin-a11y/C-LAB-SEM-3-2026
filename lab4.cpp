#include <iostream>
#include <cmath>

using namespace std;

class Shape {
private:
    double radius;
    double length;
    double width;

public:
    
    Shape(double r, double l, double w) : radius(r), length(l), width(w) {
        cout << " object created." << endl;
    }

    double calculateCirclePerimeter() const {
        const double PI = 3.14;
        return 2 * PI * radius;
    }

    
    double calculateRectanglePerimeter() const {
        return 2 * (length + width);
    }

    
    ~Shape() {
        cout << " object destroyed." << endl;
    }
};

int main() {
    double radius = 7.0;
    double length = 10.0;
    double width = 5.0;

    
    Shape myShape(radius, length, width);

    
    cout << "Perimeter of Circle: " << myShape.calculateCirclePerimeter() << endl;
    cout << "Perimeter of Rectangle: " << myShape.calculateRectanglePerimeter() << endl;

    
    return 0;
}