#include <iostream>
using namespace std;

class member {
    private:
        int id;
    public:
        member(int _id): id(_id) {}
        void print() {
            cout << id << endl;
        }
};

template <typename T>
class smartptr {
    private: 
        T *ptr;
    public:
        smartptr(T *p): ptr(p) {}

        ~smartptr() {
            cout << "free the memory! " << endl;
            delete ptr;
        }

        T& operator * () {
            return *ptr;
        }

        T* operator -> () {
            return ptr;
        }
};

// class temp {
//     private:
//         int value;
//     public:
//         temp(int _value): value(_value) {}
//         ~temp() {
//             cout << "free the memory! " << endl;
//         }
// };
int main() {
    smartptr<member> ptr = new member(10);
    ptr -> print();
}