#include "Menu.h"
#include <iostream>
#include "Task4_13.h"
#include "Task4_14.h"
#include "Task4_15.h"
#include "Task4_16.h"
#include "Task4_17.h"
#include "Task4_18.h"
#include "Task4_23.h"
#include "Task4_24.h"
#include "Task4_25.h"
#include "Task4_26.h"

using namespace std;

void Menu::showMenu() {
    cout << "\nМЕНЮ ЗАДАНИЙ\n";
    cout << "13  - Задание 4.13 (Расход топлива)\n";
    cout << "14  - Задание 4.14 (Контроль кредита)\n";
    cout << "15  - Задание 4.15 (Комиссионные)\n";
    cout << "16  - Задание 4.16 (Зарплата с переработкой)\n";
    cout << "17  - Задание 4.17 (Поиск максимума)\n";
    cout << "18  - Задание 4.18 (Таблица значений)\n";
    cout << "23  - Задание 4.23 (Анализ else)\n";
    cout << "24  - Задание 4.24 (Модификация else)\n";
    cout << "25  - Задание 4.25 (Пустой квадрат)\n";
    cout << "26  - Задание 4.26 (Палиндром)\n";
    cout << "0   - Выход\n";
    cout << "Выберите задание: ";
}

void Menu::executeTask(int choice) {
    switch (choice) {
    case 13: {
        Task4_13 task;
        task.execute();
        break;
    }
    case 14: {
        Task4_14 task;
        task.execute();
        break;
    }
    case 15: {
        Task4_15 task;
        task.execute();
        break;
    }
    case 16: {
        Task4_16 task;
        task.execute();
        break;
    }
    case 17: {
        Task4_17 task;
        task.execute();
        break;
    }
    case 18: {
        Task4_18 task;
        task.execute();
        break;
    }
    case 23: {
        Task4_23 task;
        task.execute();
        break;
    }
    case 24: {
        Task4_24 task;
        task.execute();
        break;
    }
    case 25: {
        Task4_25 task;
        task.execute();
        break;
    }
    case 26: {
        Task4_26 task;
        task.execute();
        break;
    }
    case 0:
        cout << "Программа завершена.\n";
        break;
    default:
        cout << "Неверный выбор!\n";
    }
}

void Menu::run() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        executeTask(choice);
        if (choice != 0) {
            cout << "\nНажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }
    } while (choice != 0);
}