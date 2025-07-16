#include <iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius;
    cout << "En-ter temperature in C: ";
    cin >> fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in F = " << fahrenheit << "\n";

    return 0;
};