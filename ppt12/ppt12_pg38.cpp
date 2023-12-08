#include <iostream>

using namespace std;

class Animal {
    public:
        // 순수 가상 함수
        virtual void cry() = 0;
};

class Dog: public Animal {
    // 순수 가상 함수는 반드시 오버라이딩을 해줘야 함!
    virtual void cry() override {
        cout << "Mung Mung" << endl;
    }
};

void foo(Animal *p) {
    p -> cry();
}

int main() {
    Dog d;
    foo(&d);
}