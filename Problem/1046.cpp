#include <iostream>

using namespace std;

int main()
{
    int startTime, endTime, duration;

    cin >> startTime >> endTime;

    if (endTime > startTime)
    {
        duration = endTime - startTime;
    }
    else if (startTime > endTime)
    {
        duration = (24 - startTime) + endTime;
    }
    else
    {
        duration = 24;
    }

    // cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

    return 0;
}