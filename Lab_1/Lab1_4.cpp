#include <iostream>
#include <cmath>  // Для використання M_PI

using namespace std;

int main() {
    // Оголошення змінних
    float a, b, r; // Змінні для сторін квадрата, прямокутника і радіусу кола

    // Введення змінних
    cout << "Enter the side length of the cube (a): \n";
    cin >> a;

    // Обчислення об'єму куба
    float V = pow(a, 3);
    cout << "- The volume of the cube with side length " << a << " is " << V << " cubic units." << endl;

    // Обчислення площі квадрата
    float S_square = pow(a, 2);
    cout << "- The area of the square with side length " << a << " is " << S_square << " square units." << endl;

    // Введення змінних для кола і прямокутника
    cout << "Enter the radius of the circle (r): ";
    cin >> r;

    // Обчислення довжини кола
    float L = 2 * M_PI * r;
    cout << "- The circumference of the circle with radius " << r << " is " << L << " units." << endl;

    // Введення змінних для прямокутника
    cout << "Enter the length of the rectangle (a): ";
    cin >> a;
    cout << "Enter the width of the rectangle (b): ";
    cin >> b;

    // Обчислення площі прямокутника
    float S_rectangle = a * b;
    cout << "- The area of the rectangle with length " << a << " and width " << b << " is " << S_rectangle << " square units." << endl;

    // Обчислення площі круга
    float S_circle = M_PI * pow(r, 2);
    cout << "- The area of the circle with radius " << r << " is " << S_circle << " square units." << endl;

    return 0;
}
