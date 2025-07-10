#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "Enter the number of a => ";
    cin >> a;

    cout << "Enter the number of b => ";
    cin >> b;
    cout << "Enter the number of c => ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "a is Greater than b and c  \n";
    }
    else if (b > a && b > c)
    {
        cout << "b is Greater than a and c  \n";
    }
    else if (c > a && c > b)
    {
        cout << "c is Greater than b and a  \n";
    }

    //  similarly we can find the smallest of these three numbers
    //  TO complete this we just have to adjust the condition like this
    // if (c < a && c < b) cout << "c is Less than b and a  \n";

    return 0;
};