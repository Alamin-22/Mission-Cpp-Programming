#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    long long squareResult;

    cin >> N;

    cout << fixed;

    for (int currentNum = 1; currentNum <= N; currentNum++)
    {

        if (currentNum % 2 == 0)
        {

            squareResult = (long long)currentNum * currentNum;

            cout << currentNum << "^2 = " << squareResult << endl;
        }
    }

    return 0;
}