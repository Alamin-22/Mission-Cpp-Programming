#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Choose Shape to Calculate Area:\n";
    cout << "1. Triangle\n";
    cout << "2. Circle\n";
    cout << "3. Square\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        float base, height;
        cout << "Enter base and height: ";
        cin >> base >> height;
        float area = (base * height) / 2;
        cout << "Area of Triangle = " << area << "\n";
        break;
    }

    case 2:
    {
        float radius;
        cout << "Enter radius: ";
        cin >> radius;
        float area = 3.1416 * radius * radius;
        cout << "Area of Circle = " << area << "\n";
        break;
    }

    case 3:
    {
        float side;
        cout << "Enter side length: ";
        cin >> side;
        float area = side * side;
        cout << "Area of Square = " << area << "\n";
        break;
    }

    default:
        cout << "Invalid choice.\n";
    }

    return 0;
}
