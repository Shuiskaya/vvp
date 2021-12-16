#include <iostream>
#include <math.h>

using namespace std;

double PowerA3(double a) {
    double b = a * a * a;
    return b;
}

int Sign(double x) {
    if (x < 0)
        return -1;
    else
        if (x == 0)
            return 0;
    else
        if (x > 0)
            return 1;
}

double RingS(double r1, double r2) {
    double s1 = 3.14159265 * (r1 * r1);
    double s2 = 3.14159265 * (r2 * r2);
    //cout << s1 << endl << s2 << endl;
    double k = abs(s1 - s2);
    return k;
}

int Quarter(double x, double y) {
    if (x > 0 && y > 0)
        return 1;
    else
        if (x < 0 && y > 0)
            return 2;
    else
        if (x < 0 && y < 0)
            return 3;
    else
        if (x > 0 && y < 0)
            return 4;
    else
        return 0;
}

double Fact2(int n) {
    double ans, i;
    if (n % 2 == 0)
        ans = 2;
    else
        ans = 1;
    for (i = ans + 2; i <= n; i += 2) {
        ans *= i;
    }
    return ans;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, ans, n;
    double a, b;
    cout << "Если вам необходимо завершить программу, введите 0.\n\n";
    cout << "---------------------------\n\n";
    cout << "Введите номер задания:\n";

    cin >> num;
    while (num != 0) {

        if (num == 1) {
            for (int i = 1; i < 6; i++) {
                cout << "Введите " << i << "-ое число А:\n";
                cin >> a;
                b = PowerA3(a);
                cout << "Третья степень данного числа равна: " << b << "\n\n";
            }
        }

        if (num == 2) {
            cout << "Введите два вещественных числа А и В:\n";
            cin >> a >> b;
            ans = Sign(a) + Sign(b);
            cout << "Значение Sign(A) + Sign(B) равно: " << ans << "\n\n";
        }

        if (num == 3) {
            for (int i = 1; i < 4; i++) {
                cout << "Введите " << i << "-ые внешний и внутренний радиусы:\n";
                cin >> a >> b;
                cout << "Площадь кольца равна: " << RingS(a, b) << "\n\n";
            }
        }

        if (num == 4) {
            for (int i = 1; i < 4; i++) {
                cout << "Введите координаты " << i << "-ой точки A(x; y):\n";
                cin >> a >> b;
                ans = Quarter(a, b);
                if (ans == 0)
                    cout << "Введено нулевое значение x и/или y.\n\n";
                else
                    cout << "Номер координатной четверти для этой точки равен: " << ans << "\n\n";
            }
        }

        if (num == 5) {
            cout << "Введите целое значение N:\n";
            cin >> n;
            a = Fact2(n);
            cout << "Двойной факториал числа N равен: " << a << "\n\n";
        }

        if (num < 0 || num > 5) {
            cout << "К сожалению, такого задания нет.\n\n";
        }

        cout << "---------------------------\n\n";

        cout << "Введите номер задания:\n";
        cin >> num;
    }
    return 0;
}
