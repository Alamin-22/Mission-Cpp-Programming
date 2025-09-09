#include <iostream>
using namespace std;

/*

Encapsulation is the bounding of attributes and method that operate on that data into a single unit known as class.It also hides the private attributes to protect it from the outside interfaces.

*/

class BankAccount
{
private:
    string name;
    double balance;

public:
    BankAccount(string customerName, double initialBalance)
    {
        name = customerName;
        balance = initialBalance;
    };

    void DepositAmount(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid Amount to Deposit \n";
        };
    };

    void getAccountInfo()
    {

        cout << "Owner Name is => " << name << " & the total amount is $ " << balance << "\n";
    };
};

int main()
{
    BankAccount Mollik("Mr.mollik", 200);

    Mollik.DepositAmount(200);
    Mollik.DepositAmount(50);
    Mollik.getAccountInfo();

    return 0;
};