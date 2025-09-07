#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;

    Book(string name)
    {
        title = name;
    }

    ~Book()
    {
        cout << " Book title => " << title << " has been returned" << " Resources Has been cleared  \n";
    };
};

int main()
{

    Book MolliksBook("ThePowerOfPositiveThinking");

    return 0;
};