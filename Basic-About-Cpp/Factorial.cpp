#include <iostream>
using namespace std;

int main()
{

    int n, result = 1;

    cout << "Enter a number to calculate the factorial => ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    cout << "The Factorial is => " << result << "\n";

    return 0;
}