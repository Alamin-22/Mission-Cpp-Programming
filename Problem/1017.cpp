#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int spentTime, averageSpeed, carOffer = 12;

    double distanceCovered, result;

    cin >> spentTime >> averageSpeed;

    distanceCovered = spentTime * averageSpeed;

    result = distanceCovered / carOffer;

    cout << fixed << setprecision(3) << result << "\n";

    return 0;
};