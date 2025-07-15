#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter the Number  => ";
    cin >> number;

    for (int i = 1; i <= 10; i++)
    {
        cout << number << "X" << i << "=" << i * number << " \n";
    };

    return 0;
}