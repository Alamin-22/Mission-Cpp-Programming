#include <iostream>

using namespace std;

int main()
{
    int numberOfTests;
    cin >> numberOfTests;

    for (int i = 0; i < numberOfTests; ++i)
    {
        int numberToCheck;
        cin >> numberToCheck;

        bool isPrime = true;

        if (numberToCheck <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int j = 2; j * j <= numberToCheck; ++j)
            {
                if (numberToCheck % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
        {
            cout << numberToCheck << " eh primo" << endl;
        }
        else
        {
            cout << numberToCheck << " nao eh primo" << endl;
        }
    }

    return 0;
}