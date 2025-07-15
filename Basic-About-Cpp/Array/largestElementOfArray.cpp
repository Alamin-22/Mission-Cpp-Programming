#include <iostream>
using namespace std;
int main()
{
    //   3. Find the largest element of a given array of integers

    int listOfNumbers[5] = {5, 102, 20, 90, 45};
    int largestEl = listOfNumbers[0];
    int lengthOfArr = sizeof(listOfNumbers) / sizeof(listOfNumbers[0]);

    for (int i = 0; i < lengthOfArr; i++)
    {
        if (listOfNumbers[i] > largestEl)
        {
            largestEl = listOfNumbers[i];
        };
    }

    cout << "The largest Element of the Given array is => " << largestEl << "\n";

    return 0;
};