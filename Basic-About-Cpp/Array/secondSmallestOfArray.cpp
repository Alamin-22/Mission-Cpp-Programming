#include <iostream>
using namespace std;
int main()
{

    /* 6. Write a C++ program to find the second smallest element in an array of
        integers. */
    int listOfNumbers[5] = {5, 3, 9, 15, 69};
    int lengthofArray = sizeof(listOfNumbers) / sizeof(listOfNumbers[0]);
    int SmallestEl = listOfNumbers[0];
    int secondSmallestEl = listOfNumbers[0];

    for (int i = 0; i < lengthofArray; i++)
    {
        if (listOfNumbers[i] < SmallestEl)
        {
            secondSmallestEl = SmallestEl;
            SmallestEl = listOfNumbers[i];
        }
        else if (listOfNumbers[i] < secondSmallestEl && listOfNumbers[i] != SmallestEl)
        {
            secondSmallestEl = listOfNumbers[i];
        }
    }

    cout << "The Smallest Element is => " << SmallestEl << "\n";
    cout << "The Second Smallest Element is => " << secondSmallestEl << "\n";

    return 0;
};