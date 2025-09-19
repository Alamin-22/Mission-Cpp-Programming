#include <iostream>
using namespace std;

class Person
{
public:
    string Name;

    void introduce()
    {
        cout << "My name is => " << Name << "\n";
    }
};

class Student : public Person
{
public:
    int studentId;

    void studyInfo()
    {
        cout << "My student id is => " << studentId << " \n";
    };
};

int main()
{
    Student baccha1;

    baccha1.Name = "Kuddus Ali";
    baccha1.studentId = 101;
    baccha1.introduce();
    baccha1.studyInfo();

    return 0;
};