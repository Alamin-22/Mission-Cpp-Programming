#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter the number to Print to N prime Numbers => ";
    cin >> number;

    int result = 1;

    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }

    cout << "The factorial is => " << result << "\n";

    return 0;
}