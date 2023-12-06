#include <iostream>
using namespace std;

class Dog {
    public:
        void bark() {
            cout << "Mung!" << endl;
        };
};

class MyDog: public Dog {
    public:
        // 부모 클래스에 정의된 bark 함수를 오버라이딩
        void bark() {
            cout << "Wal!" << endl;
        };
};

int main() {
    MyDog m;
    m.bark();
}