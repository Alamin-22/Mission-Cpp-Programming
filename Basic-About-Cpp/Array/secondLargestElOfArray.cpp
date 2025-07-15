#include <iostream>
using namespace std;
int main()
{

    /* 4. Write a C++ program to find the second largest element in an array of
        integers. */
    int listOfNumbers[5] = {5, 3, 9, 15, 69};
    int lengthofArray = sizeof(listOfNumbers) / sizeof(listOfNumbers[0]);
    int LargestEl = listOfNumbers[0];
    int secondLargestEl = listOfNumbers[0];

    for (int i = 0; i < lengthofArray; i++)
    {
        if (listOfNumbers[i] > LargestEl)
        {
            secondLargestEl = LargestEl;
            LargestEl = listOfNumbers[i];
        }
        else if (listOfNumbers[i] > secondLargestEl && listOfNumbers[i] != LargestEl)
        {
            secondLargestEl = listOfNumbers[i];
        }
    }

    cout << "The Largest Element is => " << LargestEl << "\n";
    cout << "The Second Largest Element is => " << secondLargestEl << "\n";

    return 0;
};