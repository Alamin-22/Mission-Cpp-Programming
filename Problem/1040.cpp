#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;

    double media = (N1 * 2.0 + N2 * 3.0 + N3 * 4.0 + N4 * 1.0) / 10.0;

    cout << fixed << setprecision(1);

    cout << "Media: " << media << "\n";

    if (media >= 7.0)
    {
        cout << "Aluno aprovado." << "\n";
    }
    else if (media < 5.0)
    {
        cout << "Aluno reprovado." << "\n";
    }
    else
    {
        cout << "Aluno em exame." << "\n";

        double exam_score;
        cin >> exam_score;
        cout << "Nota do exame: " << exam_score << "\n";

        double final_media = (media + exam_score) / 2.0;

        if (final_media >= 5.0)
        {
            cout << "Aluno aprovado." << "\n";
        }
        else
        {
            cout << "Aluno reprovado." << "\n";
        }

        cout << "Media final: " << final_media << "\n";
    }

    return 0;
}