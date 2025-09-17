#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    cin >> n;

    int totalCents = static_cast<int>(n * 100 + 0.5);

    cout << "NOTAS:" << "\n";

    int notes[] = {100, 50, 20, 10, 5, 2};
    for (int note_value : notes)
    {

        int noteValueInCents = note_value * 100;

        int count = totalCents / noteValueInCents;
        cout << count << " nota(s) de R$ " << note_value << ".00" << "\n";

        totalCents %= noteValueInCents;
    }

    cout << "MOEDAS:" << "\n";

    int coins[] = {100, 50, 25, 10, 5, 1};
    for (int coinValueInCents : coins)
    {
        int count = totalCents / coinValueInCents;

        double coinValue = coinValueInCents / 100.0;

        cout << count << " moeda(s) de R$ " << fixed
             << setprecision(2) << coinValue << "\n";

        totalCents %= coinValueInCents;
    }

    return 0;
}