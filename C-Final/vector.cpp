#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numbers;
    int n;
    int temp;

    cout << "How many Inters to enter => ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << "Enter Number for the IDx " << i << "  =>";
        cin >> temp;
        numbers.push_back(temp); // push back is used to add an number to the end of the array I mean the vector. As compared to JS push
    };

    cout << "Inserted Vector (Array) is \n";
    for (int num : numbers)
    {
        cout << num << " ";
    };

    cout << "\n";

    sort(numbers.begin(), numbers.end());

    cout << "Sorted element \n";

    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << " \n";

    return 0;
};