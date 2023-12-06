#include <iostream>

using namespace std;

class List

{

private:
    struct Node
    {
        int value;
        Node *next;
        Node *prev;
    };

    Node *head;
    Node *tail;
    Node *cur;

public:
    List() : head(NULL), tail(NULL) {}

    // add a new element to the list
    List &append(int num)
    {
        Node *newNode = new (Node);
        newNode->value = num;

        if (head == NULL)
        {
            newNode->next = NULL;
            newNode->prev = NULL;
            head = tail = cur = newNode;
        }
        else
        {
            tail->next = newNode;

            newNode->next = NULL;
            newNode->prev = tail;
            tail = newNode;
        }

        return *this;
    }

    // move to the next element in the list
    List &next()
    {

        if (cur->next != NULL)
        {
            cur = cur->next;
        }

        return *this;
    }

    // return the value of the current position
    int get()
    {
        return cur->value;
    }

    // reset the current position to the first of the list.
    void rewind()
    {
        while (true)
        {
            if (cur->prev == NULL)
            {
                break;
            }

            cur = cur->prev;
        }

        cout << "rewind the list!" << endl;
    }

    // // print out the length of the list and the current position.
    void info()
    {
        Node *length_loop = head;
        Node *cur_loop = cur;

        int length = 0;
        int cur_position = 0;

        while (true)
        {
            if (length_loop == NULL)
            {
                break;
            }

            length++;
            length_loop = length_loop->next;
        }

        while (true)
        {
            if (cur_loop->prev == NULL)
            {
                break;
            }

            cur_position++;
            cur_loop = cur_loop->prev;
        }

        cout << "length: " << length << endl;
        cout << "current: " << cur_position << endl;
    }

    List operator+(int i)
    {
        return append(i);
    } // append as an operator

    // append 함수를 연산자 오버로딩으로 구현하세요

    List operator+(List &list)
    {
        tail->next = list.head;
        list.head->prev = tail;

        while (true)
        {
            if (tail->next == NULL)
            {
                break;
            }
            tail = tail->next;
        }

        return *this;
    } // concatenate a list
    // 다른 리스트를 인자로 입력받고,
    // 걔를 본 리스트뒤에 연결합니다.

    List operator-(int n)
    {
        Node *temp = head;

        while (true)
        {
            if (n == 0)
                break;

            temp = temp->next;
            n--;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;

        return *this;
    } // remove a 'n'-th node
      // n번째에 위치한 노드를 제거합니다.

    void printall()
    {
        Node *temp = head;

        while (true)
        {
            if (temp == NULL)
            {
                break;
            }
            cout << temp->value << "-";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()

{

    List listOne;
    List listTwo;

    listOne.append(10).append(20).append(30).append(40);

    listOne.next().next();
    cout << listOne.get() << endl; // print out 30

    listTwo = listTwo + 100 + 200 + 300; // append values 100, 200 and 300 to ll.

    listTwo.next();
    cout << listTwo.get() << endl; // print out 200

    listTwo = listTwo + listOne; // concatenate the list 'l' to the list 'll';

    // The list 'll' would be '[100][200][300][10][20][30][40]'
    //                   index:   0    1    2   3   4   5   6

    listTwo.printall();

    listTwo.next().next().next();

    cout << listTwo.get() << endl; // print out 20

    listTwo = listTwo - 5;

    listTwo.next();

    cout << listTwo.get() << endl; // print out 40, not 30.

    listTwo.printall();

    listTwo.info();

    return 0;
}



// struct node {
//     int data;
//     node *next;
//     int index;
   
//     node(int d, node *n, int i): data(d), next(n), index(i) {}
// };

// class sList {
//     private:
//     node *head;
//     node *current;
//     int index;
    
//     public:
//     sList(): head(0), current(0), index(0) {}

//     void push_front(const int &d) {
//         head = new node(d, head, index++);
//     }

//     void push_back(const int &d) {
//         node *temp = head;

//         while(true) {
//             if (temp -> next == NULL) break;

//             temp = temp -> next;
//         }
        
//         int temp_index = (temp -> index) - 1;
//         temp -> next = new node(d, current, temp_index);
//     }

//     sList& next() {
//         if (!current) current = head;
//         else current = current -> next;

//         return *this;
//     }

//     int get() {
//         return current -> data;
//     }

//     int operator[] (int i) {
//         node *start;

//         for (start = head; start -> index != i; start = start -> next);
            
//         return start -> data;
//     }


// };

// int main() {
//     sList s;

//     s.push_front(10);
//     s.push_front(20);
//     s.push_front(30);
//     s.push_front(40);
//     s.push_front(50);

//     s.push_back(0);

//     // 10 <- 20 <- 30 <- 40 <- 50 <- head

//     s.next().next().next().next().next().next();
//     cout << s.get() << endl;



//     // int i = 0;
//     // cout << s[i++] << endl;
//     // cout << s[i++] << endl;
//     // cout << s[i++] << endl;
//     // cout << s[i++] << endl;
//     // cout << s[i++] << endl;

//     return 0;
// }