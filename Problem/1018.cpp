#include <iostream>
using namespace std;
int main()
{

    int amount;
    cin >> amount;

    int bankNotes[] = {100, 50, 20, 10, 5, 2, 1};
    cout << amount << "\n";

    for (int i = 0; i < 7; i++)
    {

        int NoteValue = bankNotes[i];

        int count = amount / NoteValue;

        cout << count << " nota(s) de R$ " << NoteValue << ",00" << "\n";

        amount = amount % NoteValue;
    };

    return 0;
};