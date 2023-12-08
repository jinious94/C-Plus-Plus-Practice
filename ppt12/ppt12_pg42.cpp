#include <iostream>

using namespace std;

class Animal
{
public:
    virtual ~Animal() {}
    void cry() { cout << "Crrr" << endl; }
};

class Dog : public Animal
{
    int color;
};

void foo(Animal *p)
{
    p->cry();
}

int main()
{
    Animal a;
    Dog d;

    cout << typeid(Animal).name() << endl; // 6Animal
    cout << typeid(a).name() << endl; // 6Animal
    cout << typeid(Dog).name() << endl; // 3Dog
    cout << typeid(d).name() << endl; // 3Dog

    Animal *p = &a;
    const type_info &t1 = typeid(*p);
    cout << t1.name() << endl; // 6Animal

    p = &d;
    const type_info &t2 = typeid(*p);
    cout << t2.name() << endl; // 3Dog
}
