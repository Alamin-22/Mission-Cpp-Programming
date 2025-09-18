#include <iostream>

using namespace std;

int main()
{
    int inputNumber;

    cin >> inputNumber;

    for (int multiplier = 1; multiplier <= 10; ++multiplier)
    {
        cout << multiplier << " x " << inputNumber << " = " << (multiplier * inputNumber) << endl;
    }

    return 0;
}