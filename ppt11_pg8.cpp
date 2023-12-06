#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string str("The quick brown fox jumps over the lazy dog");

    // cout << str.length() << endl; // 43 (뒤에 null 포함)
    // cout << str.find("fox") << endl; // 16
    // cout << str.find('b') << endl; // 10
    // cout << str.find("bear") << endl; // 없음

    // str.erase(str.find("quick"), 6); // 4번 인덱스부터 길이가 6만큼 지워라
    // cout << str << endl;

    // str.replace(str.find("fox"), 3, "bear");
    // cout << str << endl;

    // str.append(", wow!");
    // cout << str << endl;


    string apple = "apple";
    string big = "big";
    string cat = "big";

    cout << (apple > big) << endl; // 0
    cout << (apple < big) << endl; // 1
    cout << (big == cat) << endl; // 1

}