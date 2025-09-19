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

class graduateStudent : public Student
{

public:
    string specialCourses;

    void displaySpecialCourses()
    {
        cout << "My special Courses are => " << specialCourses << "\n";
    };
};

int main()
{

    graduateStudent baccha1;

    baccha1.Name = "Kuddus Ali";
    baccha1.studentId = 101;
    baccha1.specialCourses = "Business, Government , Electronic Device & Circuit, Digital Logic";
    baccha1.introduce();
    baccha1.studyInfo();
    baccha1.displaySpecialCourses();

    return 0;
};