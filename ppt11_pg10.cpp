#include <iostream>
#include <memory>

using namespace std;

int main()
{
    shared_ptr<int> p1(new int);
    unique_ptr<double> p2(new double);

    *p1 = 10;
    *p2 = 20;

    cout << *p1 + *p2 << endl;

}