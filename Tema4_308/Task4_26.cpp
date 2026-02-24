#include "Task4_26.h"
#include <iostream>

using namespace std;

bool Task4_26::isPalindrome(int number) {
    int d1 = number / 10000;
    int d2 = (number / 1000) % 10;
    int d4 = (number / 10) % 10;
    int d5 = number % 10;

    return (d1 == d5 && d2 == d4);
}

void Task4_26::execute() {
    cout << "\n--- ЗАДАНИЕ 4.26: Палиндром ---\n";
    int num;
    cout << "Введите пятизначное число: ";
    cin >> num;

    if (num >= 10000 && num <= 99999) {
        if (isPalindrome(num)) {
            cout << num << " - это палиндром!" << endl;
        }
        else {
            cout << num << " - не палиндром." << endl;
        }
    }
    else {
        cout << "Ошибка: введите пятизначное число!\n";
    }
}