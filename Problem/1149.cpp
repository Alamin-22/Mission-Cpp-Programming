#include <iostream>

using namespace std;

int main()
{
    int x;
    int n;
    long long sum = 0;

    cin >> x;

    do
    {
        cin >> n;
    } while (n <= 0);

    for (int i = 0; i < n; ++i)
    {
        sum += (x + i);
    }

    cout << sum << "\n";

    return 0;
}