#include <iostream>

using namespace std;

int main()
{
    double number;
    int positive_count = 0;

    for (int i = 0; i < 6; ++i)
    {
        cin >> number;
        if (number > 0)
        {
            positive_count++;
        }
    }

    cout << positive_count << " valores positivos" << endl;

    return 0;
}