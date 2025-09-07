#include <iostream>
using namespace std;

/*
in this file I am describing about Copy Constructor

In simple term copy constructor means ,, copy a  object..

like we create a constructor inside a class so that as soon as a new object is created that constructor called and set the default value,, it means it is setting an ojbject data.. so It just need to copy those data thats it.



***We can this copy constructor called in three specific case

1. when we create an object from any existing object
2. when we pass any value to the function as a parameter
3. when something is returned on any function.


********special note about this implementation we have to remember two things for this
(const )=> this const make sure that that variable (I mean the object) is can not be change by accident it should be as it is
( & ) => which Reference that variable which have to chanage or copy

*/

class student
{
public:
    string name;
    int age;

    student(string studentName, int studentAge)
    {
        name = studentName;
        age = studentAge;

        cout << "THe Constructor is called for the student " << studentName << "\n";
    };

    student(const student &other)
    {
        name = other.name;
        age = other.age;
        cout << "COPY constructor called to create a copy of " << other.name << endl;
    }
};

void displayStudentInfo(student s)
{
    cout << "Inside the displayStudentInfo " << s.name << "And age is " << s.age << "\n";
}

int main()
{

    student mollik("Mr. Mollik", 16); // creatd a constructor I mean the object for mollik the copy applied

    student MollikUpdated = mollik; /// here we copy the mollik object into the MollikUpdated variable. and the original object remains the same.

    MollikUpdated.name = "Md. Al Amin Mollik"; /// here I am updating the copy value not the original one.
    MollikUpdated.age = 20;                    //

    displayStudentInfo(mollik);
    displayStudentInfo(MollikUpdated);

    return 0;
}