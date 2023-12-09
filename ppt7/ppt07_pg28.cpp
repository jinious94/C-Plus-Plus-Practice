#include <iostream>

using namespace std;

void func(int *num) {
    cout << num << endl;
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;

    cout << "----------" << endl;
    cout << *(num + 0) << endl;
    cout << *(num + 1) << endl;
    cout << *(num + 2) << endl;
}

int main() {
    int num[] = {10, 20 , 30, 40};
    cout << num << endl;

    func(num);
}