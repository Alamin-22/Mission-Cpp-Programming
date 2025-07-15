#include <iostream>
using namespace std;
int main()
{
    //   5. Find the smallest element of a given array of integers.

    int listOfNumbers[5] = {5, 102, 20, 90, 45};
    int smallestEl = listOfNumbers[0];
    int lengthOfArr = sizeof(listOfNumbers) / sizeof(listOfNumbers[0]);

    for (int i = 0; i < lengthOfArr; i++)
    {
        if (listOfNumbers[i] < smallestEl)
        {
            smallestEl = listOfNumbers[i];
        };
    }

    cout << "The smallest Element of the Given array is => " << smallestEl << "\n";

    return 0;
};