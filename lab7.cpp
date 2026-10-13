#include <iostream>
#include <cmath> 

using namespace std;


double AREA(double r) {
    return M_PI * r * r;
}


double AREA(double l, double b) {
    return l * b;
}


double AREA(double base, float height) {
    return 0.5 * base * height;
}

int main() {
    
    double radius;
    cout << "=== Circle ===" << endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << AREA(radius) << endl << endl;

    
    double length, breadth;
    cout << "=== Rectangle ===" << endl;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the breadth: ";
    cin >> breadth;
    cout << "Area of Rectangle: " << AREA(length, breadth) << endl << endl;

    
    double base;
    float height; 
    cout << "=== Triangle ===" << endl;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the height: ";
    cin >> height;
    cout << "Area of Triangle: " << AREA(base, height) << endl;

    return 0;
}