#include <iostream>

using namespace std;

void func (int * ptr) {
    cout << * ptr << endl;

    ptr[0] = 1;
    * (ptr + 1) = 2;

    cout << * (ptr + 0) << endl;
    cout << ptr[1] << endl;
}

int main() {
    int num[] = { 10, 20, 30 };

    func(num);

    return 0;
}