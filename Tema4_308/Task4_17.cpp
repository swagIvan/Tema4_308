#include "Task4_17.h"
#include <iostream>

using namespace std;

void Task4_17::execute() {
    cout << "\n--- ЗАДАНИЕ 4.17: Поиск максимума ---\n";
    int counter = 1;
    int number, largest;

    cout << "Введите число 1: ";
    cin >> largest;

    while (counter < 10) {
        cout << "Введите число " << counter + 1 << ": ";
        cin >> number;
        if (number > largest) {
            largest = number;
        }
        counter++;
    }

    cout << "Наибольшее число: " << largest << endl;
}