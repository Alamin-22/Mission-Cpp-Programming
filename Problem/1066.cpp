#include <iostream>

using namespace std;

int main()
{
    int number;
    int evenCount = 0;
    int oddCount = 0;
    int positiveCount = 0;
    int negativeCount = 0;

    for (int i = 0; i < 5; ++i)
    {
        cin >> number;

        if (number % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        if (number > 0)
        {
            positiveCount++;
        }
        else if (number < 0)
        {
            negativeCount++;
        }
    }

    cout << evenCount << " valor(es) par(es)" << "\n";
    cout << oddCount << " valor(es) impar(es)" << "\n";
    cout << positiveCount << " valor(es) positivo(s)" << "\n";
    cout << negativeCount << " valor(es) negativo(s)" << "\n";

    return 0;
}