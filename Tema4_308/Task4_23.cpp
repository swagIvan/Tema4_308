#include "Task4_23.h"
#include <iostream>

using namespace std;

void Task4_23::analyzePartA(int x, int y) {
    cout << "При x=" << x << ", y=" << y << ": ";
    if (x < 10)
        if (y > 10)
            cout << "******" << endl;
        else
            cout << "####" << endl;
    cout << "$$$$" << endl;
}

void Task4_23::analyzePartB(int x, int y) {
    cout << "При x=" << x << ", y=" << y << ": ";
    if (x < 10) {
        if (y > 10)
            cout << "******" << endl;
    }
    else {
        cout << "####" << endl;
        cout << "$$$$" << endl;
    }
}

void Task4_23::execute() {
    cout << "\n--- ЗАДАНИЕ 4.23: Проблема висящего else ---\n";
    cout << "Анализ для x=9, y=11 и x=11, y=9:\n\n";

    cout << "Часть a):\n";
    analyzePartA(9, 11);
    analyzePartA(11, 9);

    cout << "\nЧасть b):\n";
    analyzePartB(9, 11);
    analyzePartB(11, 9);
}