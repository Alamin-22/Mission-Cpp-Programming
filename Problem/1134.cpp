#include <iostream>

using namespace std;

int main()
{
    int alcoholCount = 0;
    int gasolineCount = 0;
    int dieselCount = 0;
    int fuelCode;

    while (true)
    {
        cin >> fuelCode;

        switch (fuelCode)
        {
        case 1:
            alcoholCount++;
            break;
        case 2:
            gasolineCount++;
            break;
        case 3:
            dieselCount++;
            break;
        }

        if (fuelCode == 4)
        {
            break;
        }
    }

    cout << "MUITO OBRIGADO" << "\n";
    cout << "Alcool: " << alcoholCount << "\n";
    cout << "Gasolina: " << gasolineCount << "\n";
    cout << "Diesel: " << dieselCount << "\n";

    return 0;
}