#include "Task4_24.h"
#include <iostream>

using namespace std;

void Task4_24::variantA() {
    int x = 5, y = 8;
    if (y == 8) {
        if (x == 5)
            cout << "eeee" << endl;
    }
    else {
        cout << "####" << endl;
    }
    cout << "$$$$" << endl;
    cout << "######" << endl;
}

void Task4_24::variantB() {
    int x = 5, y = 8;
    if (y == 8) {
        if (x == 5)
            cout << "eeee" << endl;
        else
            cout << "####" << endl;
        cout << "$$$$" << endl;
        cout << "######" << endl;
    }
}

void Task4_24::variantD() {
    int x = 5, y = 7;
    if (y == 8) {
        if (x == 5)
            cout << "eeee" << endl;
    }
    else {
        cout << "####" << endl;
        cout << "$$$$" << endl;
        cout << "######" << endl;
    }
}

void Task4_24::execute() {
    cout << "\n--- ЗАДАНИЕ 4.24: Модификация else ---\n";

    cout << "\nВариант a) x=5, y=8 (eeee и $$$$):\n";
    variantA();

    cout << "\nВариант b) x=5, y=8 (только eeee):\n";
    variantB();

    cout << "\nВариант d) x=5, y=7 (####, $$$$):\n";
    variantD();
}