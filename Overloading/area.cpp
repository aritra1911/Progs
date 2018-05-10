// Write a program to calculate the area of a circle, rectangle,
// square, triangle upon user's choice while the area of each
// figure is calculated by an overloaded area function.

#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

float area(float);         // Circle
float area(int, float);    // Rectangle
int area(int);             // Square
float area(float, float);  // Triangle

void main() {
    clrscr();
    int y, l;
    float b, h, r, a;
    cout << "Find area of:" << endl;
    cout << "1) Circle" << endl;
    cout << "2) Rectangle" << endl;
    cout << "3) Square" << endl;
    cout << "4) Triangle" << endl;
    cout << "\nEnter your choice: "; cin >> y;

    switch (y) {
        case 1:
            cout << "Enter radius: "; cin >> r;
            a = area(r); break;
        case 2:
            cout << "Enter length: "; cin >> l;
            cout << "Enter breadth: "; cin >> b;
            a = area(l, b); break;
        case 3:
            cout << "Enter length: "; cin >> l;
            a = area(l); break;
        case 4:
            cout << "Enter base: "; cin >> b;
            cout << "Enter height: "; cin >> h;
            a = area(b, h); break;
        default:
            cout << "\nCheck your choice.";
            getch(); exit(0);
    }
    cout << "\nArea calculated : " << a << endl;
    getch();
}

// Circle
float area(float rad) {
    return M_PI * rad * rad;
}

// Rectangle
float area(int length, float breadth) {
    return length * breadth;
}

// Square
int area(int length) {
    return length * length;
}

// Traingle
float area(float base, float height) {
    return 0.5 * base * height;
}
