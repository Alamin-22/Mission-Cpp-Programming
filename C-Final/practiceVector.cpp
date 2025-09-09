#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numbers;

    int n, temp;

    cout << "Enter the number of Item you want to enter => ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of Idx " << i << " => ";
        cin >> temp;
        numbers.push_back(temp);
    };

    for (int num : numbers)
    {
        cout << num << " ,";
    }

    cout << " \n";

    sort(numbers.begin(), numbers.end());

    for (int num : numbers)
    {
        cout << num << " ,";
    }

    return 0;
};