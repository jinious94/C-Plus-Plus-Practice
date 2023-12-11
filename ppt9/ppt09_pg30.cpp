#include <iostream>
using namespace std;

class NumPair{
    private:
        int x, y;
    
    public:
        NumPair(int _x, int _y): x(_x), y(_y) {}

        ~NumPair() {
            cout << "파괴자 실행!" << endl;
        }

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

        // 새로운 객체를 생성한 뒤 num1과 num2를 더한 값을 복사하고
        // 원본은 파괴 -> 파괴자 실행!
        // 메모리 측면에서 비효율적
        // NumPair operator + (NumPair &n) {
        //     return NumPair ( x + n.getX(), y + n.getY() );
        // }

        // 새로운 객체를 생성하지 않고, num1과 num2를 더한 값을
        // num1에 다시 할당
        // 메모리 측면에서 효율적
        NumPair& operator + (NumPair &n) {
            this -> add(n.getX(), n.getY());
            return *this;
        }
        

        
        // NumPair operator + (int i) {
        //     return NumPair ( x + i, y + i );
        // }

        NumPair& operator + (int i) {
            this -> add(i, i);
            return *this;
        }

        void operator ++ (int) {
            x += 100;
            y += 100;
        }
};
int main() {

    NumPair num1(10, 20);
    // NumPair num2(30, 40);

    // num1 = num1 + num2;
    // num1 = num1 + 10;  
    // num1++;

    num1.print();
}