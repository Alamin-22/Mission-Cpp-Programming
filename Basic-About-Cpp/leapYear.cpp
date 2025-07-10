#include <iostream>
using namespace std;

int main()
{

    int year;

    cout << "Enter the Year to check whether is Leap year or not => ";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << "The provided Year => " << year << " is leap Year \n";
    }
    else
    {
        cout << "The provided Year => " << year << " is not leap Year \n";
    }

    return 0;
}