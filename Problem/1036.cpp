#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double A, B, C;

    cin >> A >> B >> C;

    double delta = (B * B) - (4.0 * A * C);

    if (A == 0.0 || delta < 0.0)
    {
        cout << "Impossivel calcular" << "\n";
    }
    else
    {
        double R1 = (-B + sqrt(delta)) / (2.0 * A);
        double R2 = (-B - sqrt(delta)) / (2.0 * A);

        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << "\n";
        cout << "R2 = " << R2 << "\n";
    }

    return 0;
}