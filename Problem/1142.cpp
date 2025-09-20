#include <iostream>

using namespace std;

int main()
{
    int numberOfLines;
    cin >> numberOfLines;

    int currentNumber = 1;

    for (int i = 0; i < numberOfLines; ++i)
    {

        cout << currentNumber << " ";
        cout << (currentNumber + 1) << " ";
        cout << (currentNumber + 2) << " ";

        cout << "PUM" << "\n";

        currentNumber += 4;
    }

    return 0;
}