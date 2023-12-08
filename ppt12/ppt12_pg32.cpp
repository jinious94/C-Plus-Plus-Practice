#include <iostream>

using namespace std;

class A {
    public:
        virtual void foo (int a = 10) { cout << "A: " << a << endl; }
};

class B: public A {
    public:
        // 가상 함수 foo의 재정의
        virtual void foo (int a = 20) override { cout << "B: " << a << endl; }
};

int main() {
    A *p = new B;
    p -> foo();
}