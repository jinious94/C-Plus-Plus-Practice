#include "Stack.h"

Stack::Stack():sp(0) {}
void Stack::push(int value) {
    stack[sp++] = value;
}
int Stack::pop() {
    return stack[--sp];
}