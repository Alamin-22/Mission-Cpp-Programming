#include <iostream>
using namespace std;

class studentClass
{
public:
    int id;
    double gpa;
    studentClass(int x, double y)
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
    // we have created a constructor which is studentClass inside the class and it is called automatically as soon as an object is initialized and passes the required fields , in this case the id and GPA
    studentClass Mollik(26, 4.00); // => this is also known as parameterize constructor

    // Mollik.setValue(26, 4.00);
    Mollik.displayInfo();

    return 0;
};