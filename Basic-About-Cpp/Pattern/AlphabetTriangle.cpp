#include <iostream>
using namespace std;
int main()
{

    int rows;
    cout << "Enter the number of rows => ";
    cin >> rows;

    char ch = 'A';

    // this problem is simple. Just increment the ASCII value of Ch by 1 and with every loop it will update the character

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << "\n";
        ch++;
    }

    return 0;
};