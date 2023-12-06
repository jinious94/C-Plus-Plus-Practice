#include <iostream>
#include <random>
#include <vector>

#include <cstdlib>
#include <ctime>

using namespace std;

void lottery(int a, int b, int c, int d, int e, int f)
{

    int arr[6];
    int count = 0;

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> dis(1, 45);
    vector<int> lottoNumbers;

    cout << "Number: ";

    for (int i = 0; i < 6; i++)
    {
        int n = gen() % 45;
        arr[i] = n;
        cout << " " << n << " ";
    }

    cout << "" << endl;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == a) {
            count++;
            break;
        }
    }
    for (int i = 0; i < 6; i++) {
        if (arr[i] == b) {
            count++;
            break;
        }
    }
    for (int i = 0; i < 6; i++) {
        if (arr[i] == c) {
            count++;
            break;
        }
    }
    for (int i = 0; i < 6; i++) {
        if (arr[i] == d) {
            count++;
            break;
        }
    }
    for (int i = 0; i < 6; i++) {
        if (arr[i] == e) {
            count++;
            break;
        }
    }
    for (int i = 0; i < 6; i++) {
        if (arr[i] == f) {
            count++;
            break;
        }
    }

    if (count == 6) cout << "You match " << count << " numbers! You are in 1st place!" << endl;
    else if (count == 5) cout << "You match " << count << " numbers! You are in 2nd place!" << endl;
    else if (count == 4) cout << "You match " << count << " numbers! You are in 3nd place!" << endl;
    else if (count == 3) cout << "You match " << count << " numbers! You are in 4th place!" << endl;
    else {
        cout << "You match " << count << " numbers! Try next time!" << endl;
    }
}

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int iPower(int n, int k)
{
    if (k == 0) return 1.0;

    double result = n;
    for (int i = 1; i < k; i++)
    {
        result *= n;
    }
    return result;
}

void graph(int n) {
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    
    for (int i = 0; i < n; i++) {
        int randomNumber = (rand() % 6) + 1;
        
        switch (randomNumber)
        {
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        default:
            break;
        }
    }

    cout << "1: ";
    for (int i = 0; i < n; i++) {
        if (one > 0) {
            cout << "@";
            one--;
        } else {
            cout << "*";
        }
    }

    cout << "" << endl;

    cout << "2: ";
    for (int i = 0; i < n; i++) {
        if (two > 0) {
            cout << "@";
            two--;
        } else {
            cout << "*";
        }
    }

    cout << "" << endl;

    cout << "3: ";
    for (int i = 0; i < n; i++) {
        if (three > 0) {
            cout << "@";
            three--;
        } else {
            cout << "*";
        }
    }

    cout << "" << endl;

    cout << "4: ";
    for (int i = 0; i < n; i++) {
        if (four > 0) {
            cout << "@";
            four--;
        } else {
            cout << "*";
        }
    }

    cout << "" << endl;

    cout << "5: ";
    for (int i = 0; i < n; i++) {
        if (five > 0) {
            cout << "@";
            five--;
        } else {
            cout << "*";
        }
    }

    cout << "" << endl;

    cout << "6: ";
    for (int i = 0; i < n; i++) {
        if (six > 0) {
            cout << "@";
            six--;
        } else {
            cout << "*";
        }
    }

    cout << "" << endl;
}

int main()
{
    // int a, b, c, d, e, f;

    // cout << "Guess lottery numbers: " << endl;

    // cin >> a;
    // cin >> b;
    // cin >> c;
    // cin >> d;
    // cin >> e;
    // cin >> f;

    // lottery(a, b, c, d, e, f);





    int n;

    while (true)
    {
        cout << "input number: ";
        cin >> n;

        if (n == -1)
        {
            cout << "Done." << endl;
            break;
        } else
        {
            if (isPrime(n))
            {
                cout << n << " is a prime number." << endl;
            }
            else
            {
                cout << n << " is not a prime number." << endl;
            }
        }
    }






    // int n;

    // cout << "input number: ";
    // cin >> n;

    // for (int i = 0; i < 11; i++) {
    //     int result = iPower(n, i);

    //     cout << n << "^" << i << " = " << result << endl;
    // }






    int n;

    srand(time(0));

    cout << "Roll a dice 'n' times: ";
    cin >> n;

    graph(n);

    return 0;
}