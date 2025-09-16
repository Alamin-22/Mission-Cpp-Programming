#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double A, B, C, pi = 3.14159;
    double rectangledTriangle, circle, trapezium, square, rectangle;

    cin >> A >> B >> C;

    rectangledTriangle = ((1.0 / 2) * A * C);

    circle = (pi * C * C);

    trapezium = ((1.0 / 2) * (A + B) * C);

    square = B * B;

    rectangle = A * B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << rectangledTriangle << "\n";
    cout << "CIRCULO: " << fixed << setprecision(3) << circle << "\n";
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezium << "\n";
    cout << "QUADRADO: " << fixed << setprecision(3) << square << "\n";
    cout << "RETANGULO: " << fixed << setprecision(3) << rectangle << "\n";

    return 0;
};