#include <iostream>

using namespace std;

int* func() {
    int num[] = { 10, 20, 30, 40 };
    return num;
}

void gunc() {
    int mum[] = { 123, 456, 789 };
}

int main() {
    int *ptr;
    ptr = func();
    cout << *ptr << endl; // 10
    
    gunc();
    cout << *ptr << endl; // 123 -> OS별로 값이 다르지만 개념은 ptr은 같은 주소를 가리킴
}