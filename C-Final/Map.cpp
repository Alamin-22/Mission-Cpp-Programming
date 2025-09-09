#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> studentMarks;

    for (int i = 0; i < 3; i++)
    {
        string name;
        int mark;

        cout << "Enter the name of student " << i + 1 << "=> ";
        cin >> name;
        cout << "Enter the mark of student " << i + 1 << "=> ";
        cin >> mark;

        studentMarks[name] = mark;
    };

    for (auto const &pair : studentMarks)
    {
        cout << "Name is " << pair.first << " , and mark =>" << pair.second << "\n";
    };

    return 0;
};