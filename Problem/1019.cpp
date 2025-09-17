#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int hours = N / 3600;

    int remainder = N % 3600;

    int minutes = remainder / 60;

    int seconds = remainder % 60;

    cout << hours << ":" << minutes << ":" << seconds << "\n";

    return 0;
}