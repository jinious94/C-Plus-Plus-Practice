#include <iostream>

using namespace std;

template<typename T1, typename T2>
T1 xstrchr(T1 first, T1 last, T2 c) {

    while (first != last && *first != c) {
        ++first;
    }

    return first;
}

int main()
{
    char s[] = "abcdefg";
    char *p = xstrchr(s, s + 7, 'd');
    if (p == s + 7) cout << "Not found" << endl;
    else cout << *p << endl;

    double d[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double *q = xstrchr(d, d + 5, 4);
    if (q == d + 5) cout << "Not found" << endl;
    else cout << *q << endl;

}