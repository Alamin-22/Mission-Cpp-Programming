#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numberOfTests;
    cin >> numberOfTests;

    for (int i = 0; i < numberOfTests; ++i)
    {
        int xValue, yValue;
        cin >> xValue >> yValue;

        if (yValue == 0)
        {
            cout << "divisao impossivel" << "\n";
        }
        else
        {
            double result = (double)xValue / yValue;

            cout << fixed << setprecision(1) << result << "\n";
        }
    }

    return 0;
}