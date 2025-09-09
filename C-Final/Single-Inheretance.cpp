#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string gender;

public:
    void getPersonInfo()
    {
        cout << "Enter Name => ";
        getline(cin, name);
        cout << "Enter Age => ";
        cin >> age;
        cout << "Enter Gender => ";
        cin >> gender;
    };
};

class patient : public Person
{

protected:
    int patientID;
    string disease;

public:
    void getPatientInfo()
    {
        cout << "Enter Patient id => ";
        cin >> patientID;
        cout << "Enter patient Disease => ";
        cin >> disease;
    };

    void DisplayPatientInfo()
    {
        cout << "Here is the patient Info ------- \n";
        cout << "Name => " << name << "\n";
        cout << "Age => " << age << "\n";
        cout << "Gender => " << gender << "\n";
        cout << "Patient Id => " << patientID << "\n";
        cout << "Patient Disease => " << disease << "\n";
    }
};

int main()
{

    patient Mollik;

    Mollik.getPersonInfo();
    Mollik.getPatientInfo();
    Mollik.DisplayPatientInfo();

    return 0;
}