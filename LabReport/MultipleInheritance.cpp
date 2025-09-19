#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int studentId;

    void study()
    {
        cout << "My StudentID is => " << studentId << "\n";
    }
};

class Athlete
{
public:
    string sport;

    void practiceInfo()
    {
        cout << "I am practising for " << sport << "\n";
    }
};

class StudentAthlete : public Student, public Athlete
{
public:
    void manageTime()
    {
        cout << "I have to manage my time between study and practice." << "\n";
    }
};

int main()
{
    StudentAthlete student1;

    student1.studentId = 101;

    student1.sport = "Cricket";

    student1.study();
    student1.practiceInfo();

    student1.manageTime();

    return 0;
}