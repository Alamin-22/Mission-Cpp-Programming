#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool compareDescending(double a, double b)
{
    return a > b;
}

int main()
{
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    vector<double> sides = {n1, n2, n3};

    sort(sides.begin(), sides.end(), compareDescending);

    double A = sides[0];
    double B = sides[1];
    double C = sides[2];

    if (A >= (B + C))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }

    double a_sq = A * A;
    double bc_sq_sum = (B * B) + (C * C);

    double epsilon = 0.00001;

    if (abs(a_sq - bc_sq_sum) < epsilon)
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if (a_sq > bc_sq_sum)
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if (A == B && B == C)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if (A == B || B == C || A == C)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}