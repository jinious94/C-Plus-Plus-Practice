#include <iostream>

using namespace std;

void func() {
    cout << "func" << endl;
}

void gunc() {
    cout << "gunc" << endl;
}

int main() {
    cout << (void *) func << endl;
    cout << (void *) &func << endl;
    cout << (void *) &gunc << endl;
}