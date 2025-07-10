#include <iostream>
using namespace std;

int main()
{
    // so Here  << is called Insertion Operator also known as Output operator
    //  >>  is called Extraction operator and it is also known as Input Operator
    int age;

    cout << "Enter your age => ";
    cin >> age;
    cout << "you are " << age << " Years Old \n";

    // similarly we can take multiple variables too for example

    int a, b, c;

    cout << "Enter the value for a => ";
    cin >> a;
    cout << "Enter the value for b => ";
    cin >> b;
    cout << "Enter the value for c = > ";
    cin >> c;

    cout << "The value of a is => ";
    cout << a << "\n";
    cout << "The value of b is => ";
    cout << b << "\n";
    cout << "The value of c is  => ";
    cout << c << "\n";

    return 0;
}