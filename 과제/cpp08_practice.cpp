#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void func(int a, int b, char oper)
{
    switch (oper)
    {
    case '+':
        cout << "Input two number: ";
        cin >> a;
        cin >> b;
        cout << "Answer: " << a + b << endl;
        break;

    case '-':
        cout << "Input two number: ";
        cin >> a;
        cin >> b;
        cout << "Answer: " << a - b << endl;
        break;

    case '*':
        cout << "Input two number: ";
        cin >> a;
        cin >> b;
        cout << "Answer: " << a * b << endl;
        break;
    
    case '/':
        cout << "Input two number: ";
        cin >> a;
        cin >> b;
        cout << "Answer: " << a / b << endl;
        break;
    
    case 'Q':
        break;

    default:
        cout << "Wrong Input!" << endl;
        break;
    }
}

void dist_2d (int x1, int y1, int x2, int y2) {
    int distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << "Distance: " << distance << endl;
}

// void addCommas(int number) {
//     string numberStr = to_string(number);

//     int len = numberStr.length();
//     int start = 0;

//     while (start < len) {
//         if (start % 3 == 0) {
//             if (start == 0) {
//                 cout << "";
//             } else {
//                 cout << ",";
//             }
//         }

//         cout << numberStr[start++]; 
//     }

//     cout << endl;
// }


// void addCommas(int number) {
//     std::string numberStr = std::to_string(number);

//     int len = numberStr.length();
//     int commas = (len - 1) / 3;

//     std::cout << numberStr.substr(0, len % 3);

//     for (int i = 0; i < commas; i++) {
//         if (i == 0 && len % 3 == 0)
//             std::cout << numberStr.substr(len % 3 + i * 3, 3);
//         else
//             std::cout << ',' << numberStr.substr(len % 3 + i * 3, 3);
//     }
// }

int main()
{
    // char oper;
    // int a, b;

    // cout << "--------------" << endl;
    // cout << "+ : add" << endl;
    // cout << "* : multiply" << endl;
    // cout << "/ : divide" << endl;
    // cout << "Q : quit" << endl;
    // cout << "--------------" << endl;
    // cout << endl;
    // cout << endl;

    // cout << "Select an operator: ";
    // cin >> oper;

    // func(a, b, oper);

    

    // int x1, x2, y1, y2;

    // cout << "input x1, y1: ";
    // cin >> x1;
    // cin >> y1;

    // cout << "input x2, y2: ";
    // cin >> x2;
    // cin >> y2;

    // dist_2d(x1, y1, x2, y2);





    // int number;

    // cout << "input number: ";
    // cin >> number;

    // addCommas(number);


    int userInput;
    
    cout << "Enter a long long number: ";
    cin >> userInput;
    cout.imbue(locale(""));
    cout << userInput << endl;
    

    return 0;
}