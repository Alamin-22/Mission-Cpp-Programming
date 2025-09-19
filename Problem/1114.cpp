#include <iostream>

using namespace std;

int main()
{
    int correctPassword = 2002;
    int enteredPassword;

    while (true)
    {
        cin >> enteredPassword;

        if (enteredPassword == correctPassword)
        {
            cout << "Acesso Permitido" << "\n";
            break;
        }
        else
        {
            cout << "Senha Invalida" << "\n";
        }
    }

    return 0;
}