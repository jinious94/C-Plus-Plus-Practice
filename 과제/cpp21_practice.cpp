#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define clrcr() system("clear")
#define getkey() getchar()

class AbstractMenu {
    string title;

    public:
        AbstractMenu(const string &s) : title(s) {}

        // 부모의 파괴자는 virtual이여야 함 
        virtual ~AbstractMenu() {} 

        string getTitle() { return title; }

        // 순수 가상 함수
        virtual void command() = 0;
};

class MenuItem: public AbstractMenu {
    int id;

    public:
        MenuItem(const string &s, int n) : AbstractMenu(s), id(n) {}

        virtual void command() override {
            cout << getTitle() << " is selected." << endl;
            getkey();
        }
};

class PopupMenu : public AbstractMenu {
    vector <AbstractMenu *> v;

    public:
        PopupMenu(const string &s) : AbstractMenu(s) {}

        ~PopupMenu() {
            for (int i = 0; i < v.size(); i++) {
                delete v[i];
            }
        }

        void addMenu(AbstractMenu *p) {
            v.push_back(p);
        }

        virtual void command() override {
            while (true) {
                clrcr();

                int size = v.size();

                for (int i = 0; i < size; i++) {
                    cout << i + 1 << ". " << v[i] -> getTitle() << endl;
                }

                cout << size + 1 << ". << Back" << endl;

                cout << "Select an item >> ";

                int cmd;
                cin >> cmd;

                if (cmd == size + 1) break;
                if (cmd < 1 || cmd > size + 1) continue;

                v[cmd - 1] -> command();
            }

        }
};

int main() {

    PopupMenu *menubar = new PopupMenu("Menubar");

    PopupMenu *p1 = new PopupMenu("햄버거");
    PopupMenu *p2 = new PopupMenu("음료수");
    PopupMenu *p3 = new PopupMenu("사이드 메뉴");

    menubar -> addMenu(p1);
    menubar -> addMenu(p2);
    menubar -> addMenu(p3);

    p1 -> addMenu(new MenuItem("불고기버거", 11));
    p1 -> addMenu(new MenuItem("치킨버거", 12));
    p1 -> addMenu(new MenuItem("새우버거", 13));

    PopupMenu *coke = new PopupMenu("콜라");
    PopupMenu *sprite = new PopupMenu("사이다");
    
    p2 -> addMenu(coke);
    p2 -> addMenu(sprite);

    coke -> addMenu(new MenuItem("그냥 콜라", 21));
    coke -> addMenu(new MenuItem("제로 콜라", 22));
    sprite -> addMenu(new MenuItem("그냥 사이다", 23));
    sprite -> addMenu(new MenuItem("제로 사이다", 24));


    p3 -> addMenu(new MenuItem("감자튀김", 31));
    p3 -> addMenu(new MenuItem("샐러드", 32));
    p3 -> addMenu(new MenuItem("치킨 너겟", 33));
    p3 -> addMenu(new MenuItem("콘 옥수수", 34));

    menubar -> command();
}