#include <iostream>
using namespace std;

int main()
{

    int a, b, sum, sub, multi, reminder;

    float division;

    // taking the input from the users
    cout << "Enter the value of a => ";
    cin >> a;
    cout << "Enter the value of b => ";
    cin >> b;

    // calculate and store the answers into the declred variables

    sum = a + b;
    sub = a - b;
    multi = a * b;
    reminder = a % b;
    // note that here i have used the (float) to tell before starting the calculation that this value is in float.
    // so that c++ automatically dont return the int result.
    division = (float)a / b;

    // now showing the values on the out put

    cout << "The value of sum is => " << sum << "\n";
    cout << "The value of sub is => " << sub << "\n";
    cout << "The value of multiplication is => " << multi << "\n";
    cout << "The value of reminder is => " << reminder << "\n";
    cout << "The value of division is => " << division << "\n";

    return 0;
}
