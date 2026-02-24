#include "Task4_25.h"
#include <iostream>

using namespace std;

void Task4_25::printEmptySquare(int size) {
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void Task4_25::execute() {
    cout << "\n--- ЗАДАНИЕ 4.25: Пустой квадрат ---\n";
    int size;
    cout << "Введите размер стороны квадрата (1-20): ";
    cin >> size;

    if (size >= 1 && size <= 20) {
        printEmptySquare(size);
    }
    else {
        cout << "Ошибка: размер должен быть от 1 до 20!\n";
    }
}