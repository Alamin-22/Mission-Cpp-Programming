#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int previousNum = 0;
    int currentNum = 1;

    for (int i = 0; i < n; ++i)
    {

        if (i > 0)
        {
            cout << " ";
        }

        if (i == 0)
        {
            cout << previousNum;
        }
        else
        {
            cout << currentNum;
            int nextNum = previousNum + currentNum;
            previousNum = currentNum;
            currentNum = nextNum;
        }
    }

    cout << endl;

    return 0;
}