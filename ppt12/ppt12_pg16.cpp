#include <iostream>

using namespace std;

class Dog
{
    int dog_age;

public:
    Dog(){};
    Dog(int age) : dog_age(age + 10){};

    int get_dog()
    {
        return dog_age;
    }
};
class Me: public Dog
{
    int my_age;

    public:
        Me(int age): Dog(age), my_age(age) {};

        int get_my() {
            return my_age;
        };
};
int main()
{
    Me m(5);

    cout << m.get_my() << endl;
    cout << m.get_dog() << endl;
}