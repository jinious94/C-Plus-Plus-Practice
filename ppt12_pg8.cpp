#include <iostream>
using namespace std;

class Parent
{
private:
    // int parent_member;

public:
    int parent_member;
    Parent(int arg) : parent_member(arg){};
};
class Child : public Parent
{
private:
    int child_member;

public:
    Child(int brg, int crg) : child_member(brg), Parent(crg){};

    void answer() {
        cout << parent_member << endl;
        cout << child_member << endl;
    }
};
int main()
{
    Child c(10, 5);

    c.answer();
}