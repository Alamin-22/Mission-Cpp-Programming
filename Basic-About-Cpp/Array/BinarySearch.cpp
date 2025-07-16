#include <iostream>
using namespace std;
int main()
{
    /* Binary Search is an efficient algorithm for finding a value in a sorted array.
It divides the array in half each time, instead of checking every element like linear search. */

    int size = 6;
    int arr[size];
    int targetValue;

    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element [" << i << "] = ";
        cin >> arr[i];
    }

    // sorting
    // [2,4,8,3]

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            // sorting using swap method. It is also known as bubble sort

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // showing sorted Array And Asking the user to enter a value to Search

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Enter the value YOu want to search => ";
    cin >> targetValue;

    // now use binary search

    int low = 0, high = size - 1;
    bool isFound = false;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] == targetValue)
        {
            cout << "Target Value " << targetValue << " found at index " << mid << " in the sorted array.\n";
            isFound = true;
            break;
        }
        else if (targetValue < arr[mid])
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
        cout << " Value " << targetValue << " not found in the array.\n";
    }

    return 0;
};