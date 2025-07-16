#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int listOfNumbers[size] = {5, 3, 9, 15, 69};

    int largestEl = listOfNumbers[0];
    int secondLargestEl = listOfNumbers[0];

    for (int i = 0; i < size; i++)
    {
        if (listOfNumbers[i] > largestEl)
        {
            secondLargestEl = largestEl;
            largestEl = listOfNumbers[i];
        }
        else if (listOfNumbers[i] > secondLargestEl && listOfNumbers[i] != largestEl)
        {
            secondLargestEl = listOfNumbers[i];
        }
    }

    cout << "The largest Element is => " << largestEl << "\n";
    cout << "The second largest Element is => " << secondLargestEl << "\n";

    return 0;
};