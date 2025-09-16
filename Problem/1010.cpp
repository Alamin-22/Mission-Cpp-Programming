#include <bits/stdc++.h>

using namespace std;
int main()
{

    int productCode1, unitOfProduct1, productCode2, unitOfProduct2;
    float priceOfProduct1, priceOfProduct2;
    float totalAmountToPay;

    cin >> productCode1;
    cin >> unitOfProduct1;
    cin >> priceOfProduct1;
    cin >> productCode2;
    cin >> unitOfProduct2;
    cin >> priceOfProduct2;

    totalAmountToPay = (unitOfProduct1 * priceOfProduct1) + (unitOfProduct2 * priceOfProduct2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << totalAmountToPay << "\n";

    return 0;
}