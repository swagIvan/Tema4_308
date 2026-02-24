#include "Task4_14.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Task4_14::execute() {
    cout << "\n--- ЗАДАНИЕ 4.14: Контроль кредита ---\n";
    int account;
    double balance, charges, credits, limit;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Введите номер счета (-1, если ввод закончен): ";
        cin >> account;
        if (account == -1) break;

        cout << "Введите начальный баланс: ";
        cin >> balance;
        cout << "Введите сумму расходов: ";
        cin >> charges;
        cout << "Введите сумму прихода: ";
        cin >> credits;
        cout << "Введите пределы кредита: ";
        cin >> limit;

        double newBalance = balance + charges - credits;
        cout << "Новый баланс: " << newBalance << endl;

        if (newBalance > limit) {
            cout << "Счет: " << account << endl;
            cout << "Предел кредита: " << limit << endl;
            cout << "Баланс: " << newBalance << endl;
            cout << "Предел кредита превышен" << endl;
        }
        cout << endl;
    }
}