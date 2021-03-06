#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int v1, v2, s, t, num, a, b, a2, b2, c, c2;
    double x, y;
    cout << "Если вам необходимо завершить программу, введите 0.\n";
    cout << "Введите номер задания:\n";

    cin >> num;
    while (num != 0) {
        if (num == 1) {
            cout << "Введите значение угла в градусах:\n";
            cin >> x;
            x = x * (3.1415926535 / 180);
            cout << "Значение заданного угла в радианах: " << x << endl << endl;
        }

        if (num == 2) {
            cout << "Введите значение угла в радианах:\n";
            cin >> x;
            x = x * (180 / 3.1415926535);
            cout << "Значение заданного угла в градусах: " << x << endl << endl;
        }

        if (num == 3) {
            cout << "Введите Х, А и Y по условию:\n";
            cin >> x >> a >> y;
            x = a / x;
            cout << "1 килограмм конфет стоит: " << x << endl;
            x = x * y;
            cout << "Y килограмм конфет стоит: " << x << endl << endl;
        }

        if (num == 4) { //task3
            cout << "Введите V1, V2, S и T по условию:\n";
            cin >> v1 >> v2 >> s >> t;
            v1 = v1 * t;
            v2 = v2 * t;
            s = s + v1 + v2;
            cout << "Расстояние между ними: " << s << endl << endl;
        }

        if (num == 5) {
            cout << "Введите значение А и В\n";
            cin >> a >> b;
            if (a == 0) {
                cout << "Введено неверное значение А.\n\n";
            }
            else {
                x = (-b) / a;
                cout << "Значение х: " << x << endl << endl;
            }
        }

        if (num == 6) {
            cout << "Введите A1, B1 и C1 по условию:\n";
            cin >> a >> b >> c;
            cout << "Введите A2, B2 и C2 по условию:\n";
            cin >> a2 >> b2 >> c2;
            int o1, o2, o3;
            o1 = a * b2 - a2 * b;
            o2 = c * b2 - b * c2;
            o3 = a * c2 - a2 * c;

            if (o1 == 0) {
                cout << "Решения нет\n\n";
            }
            else {
                x = o2 / o1;
                y = o3 / o1;
                cout << "Значение Х: " << x << "\nЗначение Y: " << y << endl << endl;
            }
        }

        if (num < 0 || num > 6) {
            cout << "К сожалению, такого задания нет.\n\n";
        }

        cout << "Введите номер задания:\n";
        cin >> num;
    }
    return 0;
}
