#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "Enter a number to check = > ";
    cin >> number;

    bool isPrime = true;

    if (number <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i < number; i++)
        {
            if (number % 2 == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    cout << (isPrime ? "The number is prime NUmber" : "The Number is not a Prime Number ") << "\n";

    return 0;
};