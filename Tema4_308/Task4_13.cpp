#include "Task4_13.h"
#include <iostream>
#include <iomanip>

using namespace std;

Task4_13::Task4_13() : totalMiles(0), totalGallons(0) {}

void Task4_13::execute() {
    cout << "\n--- ЗАДАНИЕ 4.13: Расход топлива ---\n";
    int miles;
    double gallons;

    cout << fixed << setprecision(6);

    while (true) {
        cout << "Введите пройденный путь (-1, если ввод закончен): ";
        cin >> miles;
        if (miles == -1) break;

        cout << "Введите расход бензина: ";
        cin >> gallons;

        double mpg = miles / gallons;
        cout << "Миль/галлон для этой заправки: " << mpg << endl;

        totalMiles += miles;
        totalGallons += gallons;
        double totalMpg = totalMiles / totalGallons;
        cout << "Суммарное значение миль/галлон: " << totalMpg << endl << endl;
    }
    cout << "Ввод завершен.\n";
}