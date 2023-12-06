#include <iostream>

using namespace std;

struct Plus {
    int operator() (int a, int b) {
        return a + b;
    }
};

int main()
{
    Plus p;
    int n = p(1, 2);
    // == p.operator()(1, 2)

    cout << n << endl;
}