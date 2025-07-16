#include <iostream>
using namespace std;
int main()
{
    int size = 6;
    int listOfNumbers[size] = {2, 6, 4, 9, 7, 3};

    // sorting the array

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (listOfNumbers[j] > listOfNumbers[j + 1])
            {
                int temp = listOfNumbers[j];
                listOfNumbers[j] = listOfNumbers[j + 1];
                listOfNumbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << listOfNumbers[i] << " ";
    }

    int targetValue;

    cout << "Enter the Target value => ";
    cin >> targetValue;

    int low = 0, high = size - 1;
    bool isFound = false;

    while (low <= high)
    {
        int midIdx = (low + high) / 2;

        if (listOfNumbers[midIdx] == targetValue)
        {
            cout << "Targeted value " << targetValue << " Found at the indx " << midIdx << " ";
            isFound = true;
            break;
        }
        else if (targetValue < listOfNumbers[midIdx])
        {
            high = midIdx - 1;
        }
        else
        {
            low = midIdx + 1;
        }
    }

    if (!isFound)
    {
        cout << " Value " << targetValue << " not found in the array.\n";
    }

    return 0;
};