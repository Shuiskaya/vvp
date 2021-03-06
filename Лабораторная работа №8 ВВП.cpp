#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, a, b, hp1, hp2;
    double x;
    cout << "Если вам необходимо завершить программу, введите 0.\n";
    cout << "Введите номер задания:\n";

    cin >> num;
    while (num != 0) {
        if (num == 1) {
            cout << "Введите размер файла в байтах:\n";
            cin >> x;
            x = x * 0.001;
            cout << "Размер файла в килобайтах: " << x << endl << endl;
        }

        if (num == 2) {
            cout << "Введите значения А и В:\n";
            cin >> a >> b;
            if (b == 0) {
                cout << "Решений нет\n\n";
            }
            else {
                a = a / b;
                cout << "Количество отрезков В, размещённых на отрезке А: " << a << endl << endl;
            }
        }

        if (num == 3) {
            cout << "Введите значения А и В:\n";
            cin >> a >> b;
            if (b == 0) {
                cout << "Решений нет\n\n";
            }
            else {
                a = a % b;
                cout << "Длина незанятой части отрезка А: " << a << endl << endl;
            }
        }

        if (num == 4) {
            cout << "Введите двузначное число:\n";
            cin >> a;

            if (a < 10 || a > 99) {
                cout << "Введено неверное число.\n\n";
            }
            else {
                a = (a % 10) * 10 + (a / 10);
                cout << "Число, полученное при перестановке цифр исходного числа: " << a << endl << endl;
            }
        }

        if (num == 5) {
            cout << "Введите трёхзначное число:\n";
            cin >> a;

            if (a < 100 || a > 999) {
                cout << "Введено неверное число.\n\n";
            }
            else {
                hp1 = a / 100;
                a %= 100;
                hp2 = a / 10;
                a %= 10;
                a = hp2 * 100 + a * 10 + hp1;
                cout << "Число, полученное при перестановке цифр исходного числа: " << a << endl << endl;
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