#include <iostream>
#include <list>

using namespace std;

template <typename T>
class Stack : private list<T>
{
public:
    void push(const T &a)
    {
        cout << "&a: " << &a << endl;
        cout << "a: " << a << endl;

        list<T>::push_back(a);
    }

    void pop()
    {
        list<T>::pop_back();
    }

    T &top()
    {
        return list<T>::back();
    }
};

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();
}