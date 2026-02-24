#include "Task4_18.h"
#include <iostream>

using namespace std;

void Task4_18::execute() {
    cout << "\n--- ЗАДАНИЕ 4.18: Таблица значений ---\n";
    cout << "N\t10*N\t100*N\t1000*N" << endl;
    for (int N = 1; N <= 5; N++) {
        cout << N << "\t" << 10 * N << "\t" << 100 * N << "\t" << 1000 * N << endl;
    }
}