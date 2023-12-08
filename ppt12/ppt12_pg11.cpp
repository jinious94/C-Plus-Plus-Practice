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
        // 부모 클래스에 정의된 bark 함수를 오버라이딩 (재정의)
        void bark() {
            cout << "Wal!" << endl;
        };

        // 함수 오버로딩 (중복 정의)
        void bark(bool feed) {
            cout << "Krre re ek mmd kkaksdf" << endl;
        };
};

int main() {
    MyDog m;
    m.bark(true);
}