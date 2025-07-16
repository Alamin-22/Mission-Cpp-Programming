#include <iostream>
using namespace std;
int main()
{

    int size = 6;
    int listOfNumbers[size] = {2, 6, 4, 9, 7, 3};

    int targetValue;
    bool isFound = false;

    cout << "Enter the target Value = > ";
    cin >> targetValue;

    for (int i = 0; i < size; i++)
    {
        if (listOfNumbers[i] == targetValue)
        {
            cout << "The Targeted value is => " << targetValue << "And it is found on the idx no => " << i;
            isFound = true;
            break;
        }
    }

    if (!isFound)
    {
        cout << "Targeted number not found on the array ";
    }

    return 0;
};