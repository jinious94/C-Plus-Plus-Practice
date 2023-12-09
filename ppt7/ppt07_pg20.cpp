#include <iostream>

using namespace std;

int main() {
    // char형은 기본 타입 -> 정수형으로 취급
    char a[16] = { 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00 };

    char *c = (char *) a;
    int *i = (int *) a;
    long *l = (long *)a;

    cout << hex;
    cout << (int)*c << endl;
    cout << *i << endl;
    cout << *l << endl;
}