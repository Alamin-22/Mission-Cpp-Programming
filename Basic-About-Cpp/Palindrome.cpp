#include <iostream>
using namespace std;

int main()
{

    string word;
    cout << "Enter a word to check palindrome => ";
    cin >> word;
    int sizeOfWord = word.length();
    bool isPalindrome = true;

    /*

       m   a   d   a   m
    [0] [1] [2] [3] [4]

    | `i` | `name[i]` | `name[lengthOfName - 1 - i]` | Comparison    |
    | --- | --------- | ---------------------------- | ------------  |
    | 0   | `'m'`     | `name[5 - 1 - 0] = name[4]`  | `'m' == 'm'`  |
    | 1   | `'a'`     | `name[5 - 1 - 1] = name[3]`  | `'a' == 'a'`  |
    | 2   | `'d'`     | `name[5 - 1 - 2] = name[2]`  | `'d' == 'd'`  |
    */

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