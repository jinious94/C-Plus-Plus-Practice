#include <iostream>
using namespace std;

int main() {
    // 1.
    // int *ptr = new int;
    // int *qtr = ptr;

    // *ptr = 10;
    // cout << *ptr << endl;
    // cout << *qtr << endl;

    // delete ptr;

    // cout << *qtr << endl;



    // 2.
    int *ptr = new int;
    *ptr = 10;

    cout << *ptr << endl;

    delete ptr;

    cout << *ptr << endl;

    ptr = 0;
    *ptr = 9999;
    cout << *ptr << endl;


    return 0;
}