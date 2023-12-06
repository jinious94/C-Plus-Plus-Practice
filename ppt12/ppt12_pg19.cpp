#include <iostream>
using namespace std;

class Dog {
    private:
        int i;
    
    protected:
        int j;

    public:
        int k;
    
        Dog(int a, int b, int c) : i(a), j(b), k(c) {}

        void print() {
            cout << i << endl; // 내부 접근 가능
            cout << j << endl; // 내부 접근 가능
            cout << k << endl; // 내부 접근 가능
        }
};

// protected 상속을 하면
// public -> protected
// protected -> protected
// private -> x

// protected로 상속이되면, 자식 클래스 내에서 private 처럼 행동
// 자식 클래스 내의 멤버 함수로는 접근이 가능하지만
// 외부에서는 어떠한 접근도 할 수 없다.

class MyDog: protected Dog {
    public:
        MyDog(int a , int b, int c) : Dog(a, b, c) {}

        void qrint() {
            // cout << i << endl; // 자식이 부모의 private 접근 불가능
            cout << j << endl; // 자식이 자신의 private 접근 가능
            cout << k << endl; // 자식이 자신의 private 접근 가능 
        }
};

int main() {
    Dog d(1, 2, 3);
    // cout << d.i << endl; // 외부 접근 불가능
    // cout << d.j << endl; // 외부 접근 불가능
    cout << d.k << endl; // 가능
    d.print();


    MyDog m(1, 2, 3);
    // cout << m.i << endl; // 외부 접근 불가능
    // cout << m.j << endl; // 외부 접근 불가능
    // cout << m.k << endl; // 외부 접근 불가능
    m.qrint();
}