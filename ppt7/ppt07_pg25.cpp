#include <iostream>

using namespace std;

int main() {
    long l = 0x8899AABBCCDDEEFF;

    int *ptr = (int *)&l;

    cout << hex;
    cout << ptr << endl; // 0x16fd5b1a8
    cout << &ptr[0] << endl << endl; // 0x16fd5b1a8

    cout << ptr + 1 << endl; // 0x16fd6b1ac
    cout << &ptr[1] << endl << endl; // 0x16fd6b1ac

    cout << *ptr << endl; // ccddeeff
    cout << ptr[0] << endl << endl; // ccddeeff

    cout << *ptr + 1 << endl; // ccddeff00
    cout << ptr[0] + 1 << endl << endl; // ccddef00

    cout << *(ptr + 1) << endl; // 8899aabb
    cout << ptr[1] << endl << endl; // 8899aabb
}