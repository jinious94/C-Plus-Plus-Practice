#include <iostream>
using namespace std;

class NumPair
{
private:
    int x, y;

public:
    NumPair(int _x, int _y) : x(_x), y(_y) {}

    ~NumPair()
    {
        cout << "파괴자 실행!" << endl;
    }

    void print()
    {
        cout << "x: " << x << ", y: " << y << endl;
    }

    void add(int _x, int _y)
    {
        x += _x;
        y += _y;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    // NumPair &operator+(int i)
    // {
    //     this->add(i, i);
    //     return *this;
    // }
};

NumPair operator+ (int i, NumPair &n) {
    return NumPair(n.getX() + i, n.getY() + i);
}

int main()
{
    NumPair num1(10, 20);

    // num1 = num1 + 10;
    num1 = 10 + num1;

    num1.print();
}