#include <iostream>

using namespace std;

int main() {
    int *ptr = new int;
    cout << ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;

    delete ptr;
    // 실제 메모리 공간을 삭제x
    // 단지 메모리를 반환할뿐...
    cout << "Deleted!" << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
}