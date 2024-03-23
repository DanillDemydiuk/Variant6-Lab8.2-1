// Variant6-Lab8.2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int a[5] = { 1, -2, 3, -4, 5 };
    int sumN = 0;
    int first = -1, last = -1;

    // Знаходження індексів першого та останнього від'ємних елементів
    for (int i = 0; i < 5; i++) {
        if (a[i] < 0) {
            if (first == -1) {
                first = i; // Запам'ятовуємо перший від'ємний
            }
            last = i; // Запам'ятовуємо останній від'ємний
        }
    }

    if (first != -1 && last != -1 && first != last) {
        for (int i = first + 1; i < last; i++) {
            sumN += a[i];
        }
        cout << "Сума елементів масиву, розташованих між першим і останнім від'ємними елементами: " << sumN << endl;
    }

    return 0;
}

