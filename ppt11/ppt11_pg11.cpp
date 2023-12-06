#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<int> vec1;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);

    // cout << vec1.size() << endl;
    // cout << vec1.capacity() << endl;

    // vector<int> vec2(20);
    // cout << vec2.size() << endl;
    // cout << vec2.capacity() << endl;

    // for (int i = 0; i < vec1.size(); i++) {
    //     cout << vec1[i] << endl;
    // }

    for (auto it: vec1) cout << it << endl;

    // while(!vec1.empty()) {
    //     cout << vec1.back() << endl;
    //     vec1.pop_back();
    // }
}