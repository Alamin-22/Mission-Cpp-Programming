#include <iostream>
using namespace std;
int main()
{
    int size = 6;
    int listOfNumbers[size] = {2, 6, 4, 9, 7, 3};

    // sorting it

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
    // sorted array

    for (int i = 0; i < size; i++)
    {
        cout << listOfNumbers[i] << " ";
    }

    // binary search

    int targetValue;
    cout << "Enter the target value =>";
    cin >> targetValue;
    bool isFound = false;

    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (listOfNumbers[mid] == targetValue)
        {
            cout << "The Target Value " << targetValue << " Found on the Indx no => " << mid << " \n";
            isFound = true;
            break;
        }
        else if (targetValue < listOfNumbers[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (!isFound)
    {
        cout << "The Target value is not found in the Given Array \n";
    }

    return 0;
};