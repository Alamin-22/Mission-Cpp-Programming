#include <iostream>
using namespace std;
int main()
{

    int rows;
    cout << "Enter the number of rows => ";
    cin >> rows;
    // for reverse star
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = rows; j >= i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // for reverse number
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
};