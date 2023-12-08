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

    PopupMenu *menubar = new PopupMenu("MENUBAR");

    PopupMenu *p1 = new PopupMenu("File");
    PopupMenu *p2 = new PopupMenu("Edit");

    menubar -> addMenu(p1);
    menubar -> addMenu(p2);

    p1 -> addMenu(new MenuItem("New file", 11));
    p1 -> addMenu(new MenuItem("Open", 12));
    p1 -> addMenu(new MenuItem("Save", 13));

    p2 -> addMenu(new MenuItem("Copy", 21));
    p2 -> addMenu(new MenuItem("Paste", 22));

    PopupMenu *p3 = new PopupMenu("Find");
    p2 -> addMenu(p3);

    p3 -> addMenu(new MenuItem("Find", 31));
    p3 -> addMenu(new MenuItem("Find and Replace", 32));

    menubar -> command();
}