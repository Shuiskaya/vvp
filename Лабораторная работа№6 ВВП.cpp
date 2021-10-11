#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, x, y, num;
    cout << "Если вам необходимо завершить программу, введите 0.\n";
    cout << "Введите номер задания:\n";

    cin >> num;
    while (num != 0) {
        if (num == 1) { //task1
            cout << "Введите значения А и В:\n"; 
            cin >> a >> b;
            x = a;
            a = b;
            b = x;
            cout << "Новое значение A: " << a << endl << "Новое значение B: " << b << endl << endl;
        }

        if (num == 2) { //task2
            cout << "Введите значения А, В и С:\n"; 
            cin >> a >> b >> c;
            x = a;
            a = c;
            c = b;
            b = a;
            cout << "Новое значение A: " << a << endl << "Новое значение B: " << b << endl
                << "Новое значение C: " << c << endl << endl;
        }

        if (num == 3) { //task3
            cout << "Введите значения А, В и С:\n"; 
            cin >> a >> b >> c;
            x = a;
            a = b;
            b = c;
            c = a;
            cout << "Новое значение A: " << a << endl << "Новое значение B: " << b << endl
                << "Новое значение C: " << c << endl << endl;
        }

        if (num == 4) {
            cout << "Введите значение X:\n";
            cin >> a;
            x = 3 * pow(a, 6) - 6 * pow(a, 2) - 7;
            cout << "Значение функции: " << x << endl << endl;
        }

        if (num == 5) {
            cout << "Введите значение X:\n";
            cin >> a;
            x = 4 * pow(a - 3, 6) - 7 * pow(a - 3, 3) + 2;
            cout << "Значение функции: " << x << endl << endl;
        }

        if (num == 6) {
            cout << "Введите значение A:\n";
            cin >> a;
            x = a * a;
            x = x * x;
            x = x * x;
            cout << "A^8 = " << x << endl << endl;
        }

        if (num == 7) {
            cout << "Введите значение A:\n";
            cin >> a;
            x = a * a;
            y = x * a;
            x = x * y;
            y = x * x;
            x = y * x;
            cout << "A^15 = " << x << endl << endl;
        }

        if (num < 0 || num > 7) {
            cout << "К сожалению, такого задания нет.\n\n";
        }

        cout << "Введите номер задания:\n";
        cin >> num;
    }
    return 0;
}