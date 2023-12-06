#include <iostream>
using namespace std;

class NumPair{
    private:
        int x, y;
    
    public:
        NumPair(int _x, int _y): x(_x), y(_y) {}

        void print() {
            cout << "x: " << x << ", y: " << y << endl;
        }

        void add(int _x, int _y) {
            x += _x;
            y += _y;
        }

        int getX() {
            return x;
        }

        int getY() {
            return y;
        }

        NumPair operator + (NumPair &n) {
            return NumPair ( x + n.getX(), y + n.getY() );
        }

        NumPair operator + (int i) {
            return NumPair ( x + i, y + i );
        }

        void operator ++ (int) {
            x += 100;
            y += 100;
        }
};
int main() {

    NumPair num1(10, 20);
    // NumPair num2(30, 40);

    // num1 = num1 + 10;
    
    num1++;
    num1.print();

    return 0;
}