#include <iostream>

using namespace std;

class myPrint {
    private:
        int len;
    
    public:
        void print(const char *str) {
            len += printf("%s ", str);
        }

        void print(int i) {
            len += printf("%d ", i);
        }

        void print(double d) {
            len += printf("%lf ", d);
        }

        myPrint& operator << (const char *str) {
            print(str);
            return *this;
        }

        myPrint& operator << (int i) {
            print(i);
            return *this;
        }
        
        myPrint& operator << (double d) {
            print(d);
            return *this;
        }

        myPrint& operator << ( void (*endl)() ) {
            endl();
            return *this;
        }
};

void endl() {
    printf("\n");
}

int main() {
    myPrint p;

    p << "hello" << 1234 << 3.14 << endl << 3;
}