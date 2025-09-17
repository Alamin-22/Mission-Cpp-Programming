#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int years = N / 365;

    int remainingDaysAfterYears = N % 365;

    int months = remainingDaysAfterYears / 30;

    int days = remainingDaysAfterYears % 30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}