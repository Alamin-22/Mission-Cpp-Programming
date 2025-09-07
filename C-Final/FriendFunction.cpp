#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    double balance;

public:
    BankAccount(string customerName, double startingBalance) // => this is called constructor
    {
        name = customerName;
        balance = startingBalance;
    };

    ~BankAccount() // this is called destructor
    {
        cout << "the programme is finished and Memory Optimized Automatically \n";
    };

    friend void printAccountInfo(const BankAccount &account); /// this is called the friend function,, its only job is to access the private member of this class
};

void printAccountInfo(const BankAccount &account) /// by adding const and & making sure to use its original object without making any copies.
{
    cout << "The Account Owner name is => " << account.name << " and the current balance is $" << account.balance << "\n";
}

int main()
{

    BankAccount myAccount1("Mr. Mollik", 1520);
    BankAccount adiAccount("adi", 20);
    BankAccount labuAccount("Labu", 1200);

    printAccountInfo(myAccount1);
    printAccountInfo(adiAccount);
    printAccountInfo(labuAccount);

    return 0;
}