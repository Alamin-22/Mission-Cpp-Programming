#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows => ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            cout << "  ";
        }
        int num = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        num -= 2;

        for (int k = 1; k < i; k++)
        {
            cout << num-- << " ";
        }

        cout << " \n";
    }

    return 0;
};