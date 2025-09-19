#include <iostream>
#include <cmath>

using namespace std;

void showMainMenu();
void handleArithmetic();
void handleTrigonometric();
void handleLogarithmic();

int main()
{
    int choice;
    cout << "\n****** Calculator ******\n";

    while (true)
    {
        showMainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            handleArithmetic();
            break;
        case 2:
            handleTrigonometric();
            break;
        case 3:
            handleLogarithmic();
            break;
        case 4:
            cout << "Exiting calculator." << "\n";
            return 0;
        default:
            cout << "Invalid choice! Please try again.\n";
            break;
        }
        cout << "\n------------------------\n";
    }

    return 0;
}

void showMainMenu()
{
    cout << "\nSelect an operation type:\n";
    cout << "1. Arithmetic (+, -, *, /)\n";
    cout << "2. Trigonometric (sin, cos, tan, etc.)\n";
    cout << "3. Logarithmic (log, ln, etc.)\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

void handleArithmetic()
{
    int choice;
    double num1, num2;

    cout << "\n--- Arithmetic Operations ---\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4)
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    switch (choice)
    {
    case 1:
        cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
        break;
    case 2:
        cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
        break;
    case 3:
        cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
        break;
    case 4:
        if (num2 == 0)
        {
            cout << "Error: Cannot divide by zero!\n";
        }
        else
        {
            cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
        }
        break;
    default:
        cout << "Invalid choice!\n";
        break;
    }
}

void handleTrigonometric()
{
    int choice;
    double degrees, radians;

    cout << "\n--- Trigonometric Operations ---\n";
    cout << "1. Sine (sin)\n";
    cout << "2. Cosine (cos)\n";
    cout << "3. Tangent (tan)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 3)
    {
        cout << "Enter the angle in degrees: ";
        cin >> degrees;

        radians = degrees * (M_PI / 180.0);
    }

    switch (choice)
    {
    case 1:
        cout << "Result: sin(" << degrees << ") = " << sin(radians) << "\n";
        break;
    case 2:
        cout << "Result: cos(" << degrees << ") = " << cos(radians) << "\n";
        break;
    case 3:
        cout << "Result: tan(" << degrees << ") = " << tan(radians) << "\n";
        break;
    default:
        cout << "Invalid choice!\n";
        break;
    }
}

void handleLogarithmic()
{
    int choice;
    double number, base;

    cout << "\n--- Logarithmic Operations ---\n";
    cout << "1. Natural log (ln)\n";
    cout << "2. Base-10 log (log10)\n";
    cout << "3. Custom base log\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the number: ";
        cin >> number;
        cout << "Result: ln(" << number << ") = " << log(number) << "\n";
        break;
    case 2:
        cout << "Enter the number: ";
        cin >> number;
        cout << "Result: log10(" << number << ") = " << log10(number) << "\n";
        break;
    case 3:
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the number: ";
        cin >> number;

        cout << "Result: log base " << base << " of " << number << " = " << (log(number) / log(base)) << "\n";
        break;
    default:
        cout << "Invalid choice!\n";
        break;
    }
}