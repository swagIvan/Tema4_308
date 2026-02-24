#include "Task4_15.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Task4_15::execute() {
    cout << "\n--- ЗАДАНИЕ 4.15: Комиссионные продавца ---\n";
    double sales;
    cout << fixed << setprecision(2);

    while (true) {
        cout << "Введите объем продаж в долларах (-1, если ввод закончен): ";
        cin >> sales;
        if (sales == -1) break;

        double earnings = 200 + 0.09 * sales;
        cout << "Заработок: $" << earnings << endl << endl;
    }
}