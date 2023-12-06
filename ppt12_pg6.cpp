#include <iostream>
using namespace std;
class Animal
{
    string howl;

public:
    Animal(const string &sound) : howl(sound){};
    void cry() { cout << howl << endl; };
    void eat() { cout << "Feed feed feed!" << endl; };
    void run() { cout << "Run Run Run!" << endl; };
};
class Dog : public Animal
{

public:
    Dog(const string &sound) : Animal(sound){};
};

int main()
{
    Dog d("mung mung");
    d.cry();
}