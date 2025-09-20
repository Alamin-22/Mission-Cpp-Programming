#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age;
    double sumOfAges = 0.0;
    int countOfIndividuals = 0;

    while (true)
    {
        cin >> age;

        if (age < 0)
        {
            break;
        }

        sumOfAges += age;
        countOfIndividuals++;
    }

    if (countOfIndividuals > 0)
    {
        double averageAge = sumOfAges / countOfIndividuals;

        cout << fixed << setprecision(2) << averageAge << "\n";
    }

    return 0;
}