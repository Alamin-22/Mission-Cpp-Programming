#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int listOfNumbers[size] = {5, 3, 9, 15, 69};

    int SmallestEl = listOfNumbers[0];
    int secondSmallestEl = listOfNumbers[0];

    for (int i = 0; i < size; i++)
    {

        if (listOfNumbers[i] < SmallestEl)
        {
            secondSmallestEl = SmallestEl;
            SmallestEl = listOfNumbers[i];
        }
        else if (listOfNumbers[i] < secondSmallestEl && listOfNumbers[i] != SmallestEl)
        {
            SmallestEl = listOfNumbers[i];
        }
    }

    cout << "The Smallest Element is => " << SmallestEl << "\n";
    cout << "The second smallest Element is => " << secondSmallestEl << "\n";

    return 0;
};