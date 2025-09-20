#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int factorialResult = 1;

    for (int i = n; i >= 1; --i)
    {
        factorialResult *= i;
    }

    cout << factorialResult << "\n";

    return 0;
}