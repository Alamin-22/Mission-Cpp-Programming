#include <iostream>

using namespace std;

int main()
{
    int xArray[10];

    for (int i = 0; i < 10; ++i)
    {
        cin >> xArray[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        if (xArray[i] <= 0)
        {
            xArray[i] = 1;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << "X[" << i << "] = " << xArray[i] << "\n";
    }

    return 0;
}