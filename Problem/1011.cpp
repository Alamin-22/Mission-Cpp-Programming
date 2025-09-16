#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double R, result;

    cin >> R;

    result = ((4.0 / 3) * 3.14159 * R * R * R);

    cout << "VOLUME = " << fixed << setprecision(3) << result << "\n";

    return 0;
};