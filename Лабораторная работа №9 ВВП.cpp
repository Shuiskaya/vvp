﻿#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, n, k, a, b, c, ans;
    cout << "Если вам необходимо завершить программу, введите 0.\n";
    cout << "Введите номер задания:\n";

    cin >> num;
    while (num != 0) {
        if (num == 1) {
            cout << "Введите N секунд:\n";
            cin >> n;
            if (n < 0) {
                cout << "Введено неверное значение N.\n\n";
            }
            else {
                n = n % 60;
                cout << "Количество секунд, прошедших с начала последней минуты: " << n << endl << endl;
            }
        }

        if (num == 2) {
            cout << "Введите К-ый день года:\n";
            cin >> n;
            if (n < 1 || n > 365) {
                cout << "Введено неверное значение N.\n\n";
            }
            else {
                n %= 7;
                cout << "Номер дня недели для К-го дня года: " << n << endl << endl;
            }
        }
        
        if (num == 3) {
            cout << "Введите К-ый день года:\n";
            cin >> n;
            cout << "Введите день недели с номером N:\n";
            cin >> k;
            if (k < 1 || k > 365 || n < 1 || n > 7) {
                cout << "Введено неверное значение N или K.\n\n";
            }
            else {
                n = ((n + k - 1) % 7);
                if (n == 0) {
                    n = 7;
                }
                cout << "Номер дня недели для К-ого дня года: " << n << endl << endl;
            }

        }

        if (num == 4) {
            cout << "Введите стороны прямоугольника А и В:\n";
            cin >> a >> b;
            cout << "Введите сторону квадрата С:\n";
            cin >> c;

            if (a < 1 || b < 1 || c < 1) {
                cout << "Введено неверное значение A, B или C.\n\n";
            }
            else {
                ans = (a / c) * (b / c);
                cout << "Количество квадратов, размещённых на прямоугольнике: " << ans << endl;
                ans = a * b - (c * c * ans);
                cout << "Площадь незанятой части прямоугольника: " << ans << endl << endl;
            }
        }
        
        if (num == 5) {
            cout << "Введите год:\n";
            cin >> n;
            if (n < 1) {
                cout << "Введено неверное значение N.\n\n";
            }
            else {
                ans = n / 100;
                if (n % 100 != 0)
                    ans++;
                cout << "Номер столетия заданного года: " << ans << endl << endl;
            }
        }

        if (num < 0 || num > 5) {
            cout << "К сожалению, такого задания нет.\n\n";
        }

        cout << "Введите номер задания:\n";
        cin >> num;
    }
    return 0;
}