#include <iostream>
using namespace std;
int main()
{
    double number;

    cin >> number;

    if (number < 0.0 || number > 100.0)
    {
        cout << "Fora de intervalo" << "\n";
    }

    else if (number <= 25.0)
    {
        cout << "Intervalo [0,25]" << "\n";
    }
    else if (number <= 50.0)
    {
        cout << "Intervalo (25,50]" << "\n";
    }
    else if (number <= 75.0)
    {
        cout << "Intervalo (50,75]" << "\n";
    }
    else
    {
        cout << "Intervalo (75,100]" << "\n";
    }

    return 0;
}