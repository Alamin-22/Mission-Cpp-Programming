#include <iostream>
using namespace std;

int main()
{

    string word;
    cout << "Enter a word to check palindrome => ";
    cin >> word;
    int sizeOfWord = word.length();
    bool isPalindrome = true;

    for (int i = 0; i < sizeOfWord / 2; i++)
    {
        if (word[i] != word[sizeOfWord - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "The given word is Palindrome!! \n";
    }
    else
    {

        cout << "The Given word is not a palindrome \n";
    }

    return 0;
};