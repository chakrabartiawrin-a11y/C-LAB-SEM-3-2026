// write a program to show the effect of call by value and call by reference in C++

// cal by value
#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "After swap: a = " << x << ", b = " << y << endl;
   }
int main () {
    int a = 30;
    int b = 40;
   cout << "Before swap: a = " << a << ", b = " << b << endl;
   swap (a, b);
    return 0; 
}

// call by reference

#include <iostream>
using namespace std;

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;  
}
int main () {
    int x = 10;
    int y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap (&x , &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0; 
}
