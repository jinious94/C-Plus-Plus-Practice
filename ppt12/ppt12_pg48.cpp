#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void cry()
    {
        cout << "Animal!" << endl;
    }

    virtual ~Animal()
    {
        cout << "Animal destructor" << endl;
    }
};

class Dog : public Animal
{
    virtual void cry() override
    {
        cout << "Mung Mung" << endl;
    }

    ~Dog()
    {
        cout << "Dog destructor" << endl;
    }
};

int main()
{
    Animal *a = new Dog;

    a->cry();
    delete a;
}