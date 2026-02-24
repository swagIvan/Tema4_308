#include "Task4_16.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Task4_16::execute() {
    cout << "\n--- ЗАДАНИЕ 4.16: Зарплата с переработкой ---\n";
    double hours, rate;
    cout << fixed << setprecision(2);

    while (true) {
        cout << "Введите количество отработанных часов (-1 для выхода): ";
        cin >> hours;
        if (hours == -1) break;

        cout << "Введите почасовую ставку: ";
        cin >> rate;

        double salary;
        if (hours <= 40) {
            salary = hours * rate;
        }
        else {
            salary = 40 * rate + (hours - 40) * rate * 1.5;
        }

        cout << "Суммарная зарплата: $" << salary << endl << endl;
    }
}