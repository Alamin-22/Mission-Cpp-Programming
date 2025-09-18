#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salary;
    int percentage;

    cin >> salary;

    if (salary >= 0 && salary <= 400.00)
    {
        percentage = 15;
    }
    else if (salary <= 800.00)
    {
        percentage = 12;
    }
    else if (salary <= 1200.00)
    {
        percentage = 10;
    }
    else if (salary <= 2000.00)
    {
        percentage = 7;
    }
    else
    {
        percentage = 4;
    }

    double money_earned = salary * (percentage / 100.0);
    double new_salary = salary + money_earned;

    cout << fixed << setprecision(2);

    cout << "Novo salario: " << new_salary << "\n";
    cout << "Reajuste ganho: " << money_earned << "\n";
    cout << "Em percentual: " << percentage << " %" << "\n";

    return 0;
}