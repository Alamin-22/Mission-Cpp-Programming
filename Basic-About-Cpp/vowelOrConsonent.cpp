#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character to check =>> ";
    cin >> ch;

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "Given character is Vowel";
    }
    else
    {
        cout << "Given character is not Vowel";
    };

    return 0;
}
