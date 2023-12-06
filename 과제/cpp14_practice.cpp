#include <iostream>

using namespace std;

// class my_calc
// {
//     private:
//     int x, y;

//     public:
//     my_calc(int x, int y): x(x), y(y) {}
//     int add () {
//         return x + y;
//     }
//     int sub () {
//         return x - y;
//     }
//     int mul () {
//         return x * y;
//     }
//     double div() {
//         return (double) x / y;
//     }
// };

// int main()
// {
//     my_calc c(10, 20);

//     cout << c.add() << endl;
//     cout << c.sub() << endl;
//     cout << c.mul() << endl;
//     cout << c.div() << endl;
// }

class my_queue
{
public:
    struct Node
    {
        int value;
        Node *next;
    };

    Node *Head;
    Node *Tail;

    my_queue() : Head(NULL), Tail(NULL) {}

    void Enqueue(int value)
    {
        Node *newNode = new (Node);
        newNode->value = value;

        if (Head == NULL)
        {
            Tail = Head = newNode;
        }
        else
        {
            Tail = Tail -> next = newNode;
        }
    }

    void Dequeue()
    {
        if (Head != NULL) {
            Node *temp = Head;
            Head = Head -> next;
            delete(temp);
        }
    }

    int Peek()
    {
        if (Head != NULL) return Head -> value;
        
        return 0;
    }
};

int main()

{

    my_queue q;

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();

    cout << q.Peek() << endl;
}
