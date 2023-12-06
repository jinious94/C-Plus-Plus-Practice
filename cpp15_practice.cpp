#include <iostream>

using namespace std;

class List
{
    private:
        struct Node {
            int value;
            Node *next;
            Node *prev;
        };

        Node *head;
        Node *tail;
        Node *cur;

    public:
        List(): head(NULL), tail(NULL) {}

        // add a new element to the list
        List& append(int num) { 
            Node *newNode = new (Node);
            newNode -> value = num;

            if (head == NULL) {
                newNode -> next = NULL;
                newNode -> prev = NULL;
                head = tail = cur = newNode;
            } else {
                tail -> next = newNode;

                newNode -> next = NULL;
                newNode -> prev = tail;
                tail = newNode;
            }

            return *this;
        } 

        // move to the next element in the list
        List& next() {

            if (cur -> next != NULL) {
                cur = cur -> next;
            }
            
            return *this;
        } 

        // return the value of the current position
        int get()
        {
            return cur -> value;
        } 

        // reset the current position to the first of the list.
        void rewind() {
            while (true) {
                if (cur -> prev == NULL) {
                    break;
                }

                cur = cur -> prev;
            }
        } 

        // // print out the length of the list and the current position.
        void info() {
            Node *length_loop = head;
            Node *cur_loop = cur;

            int length = 0;
            int cur_position = 0;

            while (true) {
                if (length_loop == NULL) {
                    break;
                }

                length++;
                length_loop = length_loop -> next;
            }

            while (true) {
                if (cur_loop -> prev == NULL) {
                    break;
                }

                cur_position++;
                cur_loop = cur_loop -> prev;
            }


            cout << "length: " << length << endl;
            cout << "current: " << cur_position << endl;
        } 
};

int main()
{
    List list;    

    list.append(10).append(20).append(30).append(40);

    list.next().next();

    cout << list.get() << endl;

    list.info();

    list.rewind();

    cout << list.get() << endl;
    
    return 0;
}