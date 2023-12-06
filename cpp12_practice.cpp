// #include <iostream>

// using namespace std;

// char* mystrcat(const char *str1, const char *str2) {
//     int cnt1 = 0;
//     int cnt2 = 0;

//     const char *temp1 = str1;
//     const char *temp2 = str2;

//     // str1과 str2 문자열 길이 카운트
//     while (*temp1++ != '\0') {
//         cnt1++;
//     }
//     while (*temp2++ != '\0') {
//         cnt2++;
//     }

//     // str1과 str2 합친 문자열 길이의 배열 선언
//     char *result = new char[cnt1 + cnt2];

//     for (int i = 0; i < cnt1; i++) {
//         result[i] = *str1++;
//     }

//     for (int i = cnt1; i < cnt1 + cnt2; i++) {
//         result[i] = *str2++;
//     }

//     return result;
// }

// int main(){

//     char* str = mystrcat("Hello!", "World!");

//     cout << "Result: " << endl;

//     while (*str != '\0') {
//         cout << *str++;
//     }

//     cout << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

template <typename T>
struct list
{
    T value;
    list *next;
    list *prev;
};

template <typename T>
list<T> *append(T value)
{
    list<T> *n = new (list<T>);
    n->value = value;
    n->next = NULL;
    n->prev = NULL;

    return n;
}

template <typename T>
list<T> *append(list<T> *tail, T value)
{
    list<T> *n = new (list<T>);
    n->value = value;
    n->next = NULL;
    n->prev = tail;
    tail = tail->next = n;

    return tail;
}

template <typename T>
list<T> *reverse(list<T> *tail)
{
    list<T> *r_head = tail;
    while (tail != NULL)
    {
        list<T> *temp = tail->prev;
        tail->prev = tail->next;
        tail->next = temp;

        tail = tail->next;
    }

    return r_head;
}

int main()
{
    list<int> *head = NULL;
    list<int> *tail = NULL;
    list<int> *loop = NULL;
    list<int> *r_head = NULL;

    tail = head = append(10);
    tail = append(tail, 20);
    tail = append(tail, 30);
    tail = append(tail, 40);
    tail = append(tail, 50);
    tail = append(tail, 60);

    for (loop = head; loop != NULL; loop = loop->next)
    {
        cout << loop->value << endl;
    }

    r_head = reverse(tail);

    cout << "Reversed" << endl;

    for (loop = r_head; loop != NULL; loop = loop->next)
    {
        cout << loop->value << endl;
    }

    return 0;
}