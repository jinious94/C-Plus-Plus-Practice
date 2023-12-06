#include <iostream>
using namespace std;

int main() {
    int input1, input2;
    
    cout << "Input1: ";
    cin >> input1;
    
    cout << "Input2: ";
    cin >> input2;

    cout << "Add: " << input1 + input2 << endl;
    cout << "Sub: " << input1 - input2 << endl;
    cout << "Mul: " << input1 * input2 << endl;
    cout << "Div: " << input1 / input2 << endl;




    string name;
    int id;

    cout << "My name is ";
    cin >> name;

    cout << "My student ID is ";
    cin >> id;

    cout << "My name and ID is " << name << " and " << id << endl;




    int n;
    cin >> n;
    cout << n << endl;




    int age;

    cout << "HEnter your age: ";
    cin >> age;

    cout << "Your age in months is " << age * 12 << "." << endl; 



    int cel;
    cout << "Please enter a Celsius value: ";
    cin >> cel;

    cout << cel << " degrees Celsius is " << 1.8 * cel + 32.0 << " degrees Fahrenheit." << endl;


    return 0;
}