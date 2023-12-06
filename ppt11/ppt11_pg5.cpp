#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "String!";
    string str2 = "Good!";

    cout << str1 + str2 << endl;

    string two(20, '$');
    string three("Lottery Winner!");

    string four = two + three;
    cout << four << endl;

    char alls[] = "All's well that ends well";
    string five(alls, 20); // alls를 길이 20만큼만
    cout << five << "!\n";

    string six(alls + 6, alls + 10); // index 6 ~ 9 까지 (10 전)
    cout << six << ", ";

    string seven(&five[6], &five[10]); // index 6 ~ 9 까지 (10 전)
    cout << seven << "...\n";

    string eight(four, 7, 16); // index 7부터 길이가 16만큼

    cout << eight << " in motion!" << endl;
}