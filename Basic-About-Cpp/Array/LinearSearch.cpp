#include <iostream>
using namespace std;
int main()
{
    // liner search is nothing just have to find an element from an array by checking one by one just like we do using loop

    int listOfNumbers[5];
    int TargetValue, valueFoundOn;
    bool isFound;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value for idx " << i + 1 << " => ";
        cin >> listOfNumbers[i];
    }

    cout << "Enter the Target Value You want to search on the given array => ";
    cin >> TargetValue;

    for (int j = 0; j < 5; j++)
    {
        if (listOfNumbers[j] == TargetValue)
        {
            valueFoundOn = j + 1;
            isFound = true;
            break;
        }
    }

    if (isFound)
    {
        cout << "The Targeted Value is => " << TargetValue << "Found on the idx no =>  " << valueFoundOn << " \n";
    }
    {
        cout << "The Value is not found on the Given array. \n";
    }

    return 0;
};