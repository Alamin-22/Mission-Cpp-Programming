#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "I am eating." << "\n";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Woof woof" << "\n";
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meow Meow" << "\n";
    }
};

int main()
{
    Dog myDog;
    Cat myCat;

    myDog.eat();
    myDog.bark();

    myCat.eat();
    myCat.meow();

    return 0;
}