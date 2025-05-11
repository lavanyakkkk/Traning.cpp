#include <iostream>
using namespace std;

#define PI 3.14

void calculateArea() {
    int choice;
    float a, b, r;
    float area;

    cout << "Select shape to calculate area:\n";
    cout << "1. Triangle\n2. Rectangle\n3. Circle\n4. Square\n";
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice) {
    case 1: { 
        float base, height;
        cout << "Enter base and height of the triangle: ";
        cin >> base >> height;
        area = 0.5 * base * height;
        cout << "The area of the triangle is: " << area << endl;
        break;
    }
    case 2: { 
        cout << "Enter length and breadth of the rectangle: ";
        cin >> a >> b;
        area = a * b;
        cout << "The area of the rectangle is: " << area << endl;
        break;
    }
    case 3: { 
        cout << "Enter radius of the circle: ";
        cin >> r;
        area = PI * r * r;
        cout << "The area of the circle is: " << area << endl;
        break;
    }
    case 4: { 
        cout << "Enter the side of the square: ";
        cin >> a;
        area = a * a;
        cout << "The area of the square is: " << area << endl;
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    }
}

int main() {
    calculateArea();
    return 0;
}
