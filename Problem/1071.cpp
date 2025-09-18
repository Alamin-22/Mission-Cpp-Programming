#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y;
    int sum = 0;

    cin >> x >> y;

    int start = min(x, y);
    int end = max(x, y);

    for (int i = start + 1; i < end; ++i)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}