#include <iostream>
using namespace std;

int sum (int a, int b) { return a + b; }

int * arr () {
    int * num = new int[4];
    *(num + 0) = 1;
    *(num + 1) = 2;
    *(num + 2) = 3;
    *(num + 3) = 4;

    return num;
}

int main() {
    int (*sum_pointer)(int a, int b);
    int * (*arr_pointer)();

    sum_pointer = sum;
    arr_pointer = &arr;

    cout << sum_pointer(10, 20) << endl;

    cout << arr_pointer()[0] << endl;
    cout << arr_pointer()[1] << endl;
    cout << arr_pointer()[2] << endl;
    cout << arr_pointer()[3] << endl;

    return 0;
}