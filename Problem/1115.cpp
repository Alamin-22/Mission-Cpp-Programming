#include <iostream>

using namespace std;

int main()
{
    int xCoordinate, yCoordinate;

    while (true)
    {
        cin >> xCoordinate >> yCoordinate;

        if (xCoordinate == 0 || yCoordinate == 0)
        {
            break;
        }

        if (xCoordinate > 0 && yCoordinate > 0)
        {
            cout << "primeiro" << "\n";
        }
        else if (xCoordinate < 0 && yCoordinate > 0)
        {
            cout << "segundo" << "\n";
        }
        else if (xCoordinate < 0 && yCoordinate < 0)
        {
            cout << "terceiro" << "\n";
        }
        else
        {
            cout << "quarto" << "\n";
        }
    }

    return 0;
}