#include <iostream>
using namespace std;
int main()
{
    string word;

    cout << "Enter a value to check palindrome => ";
    cin >> word;

    int lengthOfArr = word.length();
    bool isPalindrome = true;

    for (int i = 0; i <= lengthOfArr; i++)
    {
        if (word[i] != word[lengthOfArr - i - 1])
        {
            cout << "The given Word is not a palindrome \n";
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)

    {
        cout << "The given Word is palindrome \n";
    }

    return 0;
};