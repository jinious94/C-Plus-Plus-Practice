#include <iostream>
#include <stdio.h>

using namespace std;

int len;

void print (char *str) {
    len += printf("%s ", str);
}
void print (int i) {
    len += printf("%d ", i);
}

int main() {
    // print("hello");
    print(1234);

    printf("%d ", len);

    return 0;
}