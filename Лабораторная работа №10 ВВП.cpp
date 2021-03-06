#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, a, b, c, d, n;
    cout << "Если вам необходимо завершить программу, введите 0.\n";
    cout << "Введите номер задания:\n";

    cin >> num;
    while (num != 0) {
        if (num == 1) {
            cout << "Введите два значения А и В:\n";
            cin >> a >> b; 
            if (a > 2 && b <= 3) {
                cout << "Высказывание А > 2 и В <= 3 верно." << endl << endl;
            }
            else
                cout << "Высказывание А > 2 и В <= 3 неверно." << endl << endl;
        }
        
        if (num == 2) {
            cout << "Введите три значения А, В и С:\n";
            cin >> a >> b >> c;
            if (a < b && b < c) {
                cout << "Высказывание А < В < С верно.\n\n";
            }
            else
                cout << "Высказывание А < В < С неверно.\n\n";
        }

        if (num == 3) {
            cout << "Введите число для проверки:\n";
            cin >> a;
            if (a < 0) {
                cout << "Введено неверное число.\n\n";
            }
            else {
                if (a % 2 == 0 && a > 9 && a < 100) {
                    cout << "Данное число является четным двузначным.\n\n";
                }
                else
                    cout << "Данное число не является четным двузначным.\n\n";
            }
        }

        if (num == 4) {
            cout << "Введите трёхзначное число.\n";
            cin >> n;
            if (n < 100 || n > 999) {
                cout << "Введено неверное число.\n\n";
            }
            else {
                a = n / 100;
                n %= 100;
                b = n / 10;
                c = n % 10;
                if (a < b && b < c) {
                    cout << "Цифры данного числа образуют возрастающую последовательность\n\n";
                }
                else
                    if (a > b && b > c) {
                        cout << "Цифры данного числа образуют убывающую последовательность\n\n";
                    }
                    else
                        cout << "Цифры данного числа не образуют возрастающую или убывающую последовательность\n\n";
            }
        }

        if (num == 5) {
            cout << "Введите четырёхзначное число:\n";
            cin >> n;
            if (n < 1000 || n > 9999) {
                cout << "Введено неверное число.\n\n";
            }
            else {
                a = n / 1000;
                n %= 1000;
                b = n / 100;
                n %= 100;
                c = n / 10;
                d = n % 10;
                if (a == d && b == c) {
                    cout << "Данное число читается одинаково слева направо и справа налево\n\n";
                }
                else 
                    cout << "Данное число не читается одинаково слева направо и справа налево\n\n";
            }
        }

        if (num == 6) {
            cout << "Введите стороны треугольника a, b и c:\n";
            cin >> a >> b >> c;
            if (a < 1 || b < 1 || c < 1) {
                cout << "Введено неверное значение a, b или c.\n\n";
            }
            else {
                if ((a * a + b * b == c * c)
                    || (a * a + c * c == b * b)
                        || (b * b + c * c == a * a))
                            cout << "Треугольник со сторонами a, b и c является прямоугольным\n\n";
                else 
                    cout << "Треугольник со сторонами a, b и c не является прямоугольным\n\n";
            }
        }

        if (num == 7) {
            cout << "Введите стороны треугольника a, b и c:\n";
            cin >> a >> b >> c;
            if (a < 1 || b < 1 || c < 1) {
                cout << "Введено неверное значение a, b или c.\n\n";
            }
            else {
                if ((a + c > b) && (a + b > c) && (b + c > a))
                    cout << "Треугольник со сторонами a, b и c существует.\n\n";
                else
                    cout << "Треугольник со сторонами a, b и c не существует.\n\n";
            }
        }

        if (num < 0 || num > 7) {
            cout << "К сожалению, такого задания нет.\n\n";
        }

        cout << "Введите номер задания:\n";
        cin >> num;
    }
    return 0;
}