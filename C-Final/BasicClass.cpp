#include <iostream>
using namespace std;

class studentClass
{
public:
    int id;
    double gpa;
    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
    void displayInfo()
    {
        cout << "Id of the Student is => " << id << " and got Gpa => " << gpa;
    }
};

int main()
{
    studentClass Mollik;

    Mollik.setValue(26, 4.00);
    Mollik.displayInfo();

    return 0;
};