#include <iostream>

using namespace std;

namespace AAA {
    int i = 30;

    namespace BBB {
        int i = 40;
    }
}

int i = 20;

int main() {
    int i = 10;
    cout << ::i << endl;
    cout << AAA::i << endl;
    cout << AAA::BBB::i << endl;
}