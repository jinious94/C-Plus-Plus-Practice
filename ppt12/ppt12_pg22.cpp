#include <iostream>

using namespace std;

class Dog
{
private:
    int i;

protected:
    int j;

public:
    int k;

    Dog(int a, int b, int c) : i(a), j(b), k(c) {}

    void print()
    {
        cout << i << endl; // 내부 접근 가능
        cout << j << endl; // 내부 접근 가능
        cout << k << endl; // 내부 접근 가능
    }
};

// private 상속을 하면
// public -> private
// protected -> private
// private -> x

class MyDog : private Dog
{
    MyDog(int a, int b, int c) : Dog(a, b, c) {}

    void qrint()
    {
        // cout << i << endl; // 자식이 부모의 private 접근 불가능
        cout << j << endl; // 자식이 자신의 private 접근 가능
        cout << k << endl; // 자식이 자신의 private 접근 가능
    }
};

class YourDog : public MyDog
{
public:
    // YourDog(int a, int b, int c) : MyDog(a, b, c) {}

    // void rrint()
    // {
    //     cout << i << endl;
    //     cout << j << endl;
    //     cout << k << endl;
    // }
};

int main()
{
}