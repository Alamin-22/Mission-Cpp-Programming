#include <iostream>
#include <list>
using namespace std;
                                                                                                                                                                      
void displayList(const list<int> &l)
{

    for (int val : l)
    {
        cout << val << " ";
    };
    cout << " \n";
};                      

int main()
{
    list<int> numbers = {10, 20, 30, 40, 50};

    cout << "Initial List => ";
    displayList(numbers);

    // removing the element 30
    numbers.remove(30);

    cout << "AFter Removing 30 the list becomes => ";
    displayList(numbers);

    // now adding 5 to the begining and 60 to the end;
    numbers.push_front(5);
    numbers.push_back(60);

    cout << " The Updated list is => -> ";
    displayList(numbers);

    return 0;
};