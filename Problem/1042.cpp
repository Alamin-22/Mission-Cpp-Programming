#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int v1, v2, v3;

    cin >> v1 >> v2 >> v3;

    vector<int> original = {v1, v2, v3};
    vector<int> sorted = original;

    sort(sorted.begin(), sorted.end());

    for (int val : sorted)
    {
        cout << val << "\n";
    }

    cout << "\n";

    for (int val : original)
    {
        cout << val << "\n";
    }

    return 0;
}