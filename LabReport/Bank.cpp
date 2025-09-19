#include <iostream>
using namespace std;

class Bank
{
private:
    string CustomerName;
    string AccountNumber;
    double Balance;

public:
    Bank(string name, string accNum, double bal)
    {
        CustomerName = name;
        AccountNumber = accNum;
        Balance = bal;
    };

    void deposit(double amount)
    {
        Balance += amount;
        cout << "Deposit added=> " << amount << "\n";
    };

    void withdraw(double amount)
    {
        if (amount > Balance)
        {
            cout << "Enough Tk nai \n";
        }
        else
        {
            Balance -= amount;
            cout << "withdrawn amount is => " << amount << "\n";
            cout << "Current new balance is => " << Balance << "\n";
        };
    }

    void displayInfo()
    {
        cout << "Customer Name is => " << CustomerName << " & Account Number is => " << AccountNumber << "\n";
        cout << "Current Balance is => " << Balance << "\n";
    }
};

int main()
{

    Bank customer1("Mr.Mollik", "ea2022", 5000);

    customer1.deposit(3000);
    customer1.withdraw(2500);
    customer1.displayInfo();

    return 0;
};