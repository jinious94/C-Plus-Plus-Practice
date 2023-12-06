#include <iostream>
#include <vector>
#include <map>

using namespace std;

class phonebook
{
    map< int, vector<string> > table;

public:
    int hash(const string &s)
    {

        int ret = 0;

        for (auto i : s)
            ret += i;

        return ret % 8;
    }

    void input(const string &name, const string &number)

    {

        // write code here

        /*

        이름과 전화번호 페어를 map 클래스의 table 변수에다가 저장하세요.



        키는 name의 해시로 부터 설정되어야 합니다.

        ( 'int hash(const string &s)'  함수를 이용하세요 )



        전화번호는 벡터클래스에 저장되어야 합니다.

        만약 키가 충돌이 나면, 전화번호는 벡터클래스에 이어져가며 저장됩니다.

        */

        int key = hash(name);
        table[key].push_back(number);

       
    }

    void get(const string &name)

    {

        // write code here

        /*

        주어진 이름으로부터 해시테이블에서 전화번호를 검색하고 출력하세요.

        만약 이름의 키 값이 충돌로 인해 여러개의 번호를 가질경우, 모든 전화번호를

        모두 출력하여야 합니다 (해당 키의 벡터에 저장된 모든 값).

         */

        int key = hash(name);
        
        // map< int, vector<string> >::iterator it;
        if (table[key].size() > 1) {
            for (auto it : table[key]) {
                cout << it << " ";
            }
        } else if (table[key].size() == 1) {
            cout << table[key][0] << endl;
        }

        cout << endl;
        
    }
};

int main()
{

    phonebook p;

    p.input("chonnam", "111-1111");

    p.input("national", "222-2222");

    p.input("university", "333-3333");

    p.input("c++", "444-4444");

    p.input("programming", "555-5555");

    p.input("and", "666-6666");

    p.input("practice", "777-7777");

    p.get("chonnam");

    p.get("national");

    p.get("university");

    p.get("c++");

    p.get("programming");

    p.get("and");

    p.get("practice");
}
