#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;

    void introduce()
    {
        cout << "My name is " << name << "\n";
    }
};

class Student : virtual public Person
{
public:
    int studentId;

    void study()
    {
        cout << "I am studying. My ID is " << studentId << "\n";
    }
};

class Employee : virtual public Person
{
public:
    string jobTitle;

    void work()
    {
        cout << "I am working. My job title is " << jobTitle << "\n";
    }
};

class Intern : public Student, public Employee
{
public:
    void getReport()
    {
        cout << "Submitting my intern report \n";
    }
};

int main()
{
    Intern person1;

    person1.name = "Mollik";

    person1.studentId = 101;
    person1.jobTitle = "Full Stack Developer";

    person1.introduce();
    person1.study();
    person1.work();
    person1.getReport();

    return 0;
}