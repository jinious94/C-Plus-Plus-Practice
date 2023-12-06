#include <iostream>

using namespace std;

int main() {
    // int length, width, height;

    // cout << "Input length: ";
    // cin >> length;

    // cout << "Input width: ";
    // cin >> width;

    // cout << "Input height: ";
    // cin >> height;

    // cout << "Box volume: " << length * width * height << endl;



    // int total, days, hours, minutes, seconds;

    // cout << "Enter the number of seconds: ";
    // cin >> total;

    // days = total / 86400;
    // hours = (total % 86400) / 3600;
    // minutes = ((total % 86400) % 3600) / 60;
    // seconds = (((total % 86400) % 3600) % 60) / 1;

    // cout << total << " seconds = " << days << " days, " 
    // << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;


    int num, thousands, hundreds, tens, ones;

    cout << "Input your number: ";
    cin >> num;

    thousands = num / 1000;

    hundreds = (num % 1000) / 100;

    tens = ((num % 1000) % 100) / 10;

    ones = (((num % 1000) % 100) % 10) / 1;

    cout << "thousands: " << thousands << endl;
    cout << "hundreds: " << hundreds << endl;
    cout << "tens: " << tens << endl;
    cout << "ones: " << ones << endl;


    return 0;
}