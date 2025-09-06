#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> vec = {
    //     1,
    //     3,
    //     5,
    //     6,
    //     7,
    // };

    vector<int> vec(5, 2);

    cout << " OutPut is => " << vec[0] << "\n";
    cout << " OutPut is => " << vec[1] << "\n";
    cout << " OutPut is => " << vec[2] << "\n";
    cout << " OutPut is => " << vec[3] << "\n";
    cout << " OutPut is => " << vec[4] << "\n";

    return 0;
}
