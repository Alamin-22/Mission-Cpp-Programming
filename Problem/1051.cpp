#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salary;
    cin >> salary;

    if (salary <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else
    {
        double total_tax = 0.0;
        double taxable_amount = salary;

        if (taxable_amount > 4500.00)
        {
            total_tax += (taxable_amount - 4500.00) * 0.28;
            taxable_amount = 4500.00;
        }

        if (taxable_amount > 3000.00)
        {
            total_tax += (taxable_amount - 3000.00) * 0.18;
            taxable_amount = 3000.00;
        }

        if (taxable_amount > 2000.00)
        {
            total_tax += (taxable_amount - 2000.00) * 0.08;
        }

        cout << fixed << setprecision(2);
        cout << "R$ " << total_tax << endl;
    }

    return 0;
}