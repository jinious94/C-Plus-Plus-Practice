#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void cry() { cout << "uh..?" << endl; }
};

class Dog : public Animal
{
    virtual void cry() { cout << "Mung Mung" << endl; }
};

void foo(Animal *p)
{
    p->cry();
}

int main()
{
    Animal a; foo(&a); 
    // virtual x -> uh
    // virtual o -> uh
    
    Dog d; foo(&d); 
    // virtual x -> uh
    // virtual o -> Mung Mung

    Animal *p;
    int n = 0;
    cin >> n;

    // virtual x -> n의 값에 상관없이 p는 Animal을 가리키는 포인터 이므로 uh 출력
    // virtual o -> n의 값에 따라 p가 가리키는 값이 달라짐
    if (n == 1) p = &d;
    else p = &a;

    p->cry();
}