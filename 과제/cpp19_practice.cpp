#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()

{

    vector<char> v{'a', 'b', 'b', 'a', 'e', 'd', 'd', 'b'};

    for (auto i : v)
        cout << i << " ";
    cout << endl; // a b b a e d d b

    /*

    Write your code here



    hint. using this functions :)

      - sort(vector<char>::iterator, vector<char>::iterator);

      - unique(vector<char>::iterator, vector<char>::iterator);

      - v.erase(vector<char>::iterator, vector<char>::iterator);

    */

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (auto i : v)

        cout << i << " ";

    cout << endl; // a b d e
}