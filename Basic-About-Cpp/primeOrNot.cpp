#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter the number => ";
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
            // here for every loop we are checking if the current number is dividable or not.
            if (number % 2 == 0)
            {
                isPrime = false;
                break;
            };
        };
    };

    cout << (isPrime ? "The number is Prime" : "The number is not Prime") << "\n";

    return 0;
}