#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double score;
    double sumOfScores = 0.0;
    int validScoresCount = 0;

    while (validScoresCount < 2)
    {
        cin >> score;

        if (score >= 0.0 && score <= 10.0)
        {
            sumOfScores += score;
            validScoresCount++;
        }
        else
        {

            cout << "nota invalida" << endl;
        }
    }

    double average = sumOfScores / 2.0;

    cout << fixed << setprecision(2);
    cout << "media = " << average << endl;

    return 0;
}