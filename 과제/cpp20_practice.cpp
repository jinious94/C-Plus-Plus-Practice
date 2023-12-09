#include <iostream>
#include <vector>

using namespace std;

class my_queue : private vector<int>
{

vector<int> v;

public:
    void enqueue(int num) {
        v.push_back(num);
    }

    void dequeue() {
        v.erase(v.begin());
    }

    int peek() {
        return v.front();
    }
};

int main()

{

    my_queue q;

    q.enqueue(10);

    q.enqueue(20);

    q.enqueue(30);

    q.enqueue(40);

    cout << q.peek() << endl; // 10

    q.dequeue();

    cout << q.peek() << endl; // 20

    q.dequeue();

    cout << q.peek() << endl; // 30

    q.dequeue();

    cout << q.peek() << endl; // 40

    q.dequeue();
}
