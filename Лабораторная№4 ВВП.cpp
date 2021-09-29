#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "Введите номер задания:\n";
    cin >> num;
    int a = 0, b = 0, s = 0, p = 0;
    double d = 0, l = 0, x = 0, y = 0, ar = 0, z = 0;

    if (num == 1) {
        cout << "Введите стороны A и B:\n";
        cin >> a >> b;
        s = a * b;
        p = 2 * (a + b);
        cout << "S = " << s << endl << "P = " << p << endl;
    }
    
    if (num == 2) {
        cout << "Введите диаметр окружности D:\n";
        cin >> d;
        l = 3.14 * d;
        cout << "L = " << l << endl;
    }

    if (num == 3) {
        cout << "Введите A and B:\n";
        cin >> x >> y;
        ar = (x + y) / 2;
        cout << "Среднее арифметическое = " << ar << endl;
    }

    if (num == 4) {
        cout << "Введите X и Y:\n";
        cin >> x >> y;
        x *= x;
        y *= y;
        z = x + y;
        cout << "Сумма: " << z << endl;
        z = x - y;
        cout << "Разность: " << z << endl;
        z = x * y;
        cout << "Умножение: " << z << endl;
        z = x / y;
        cout << "Деление: " << z << endl;
    }
    
    if (num == 5) {
        cout << "Введите X и Y:\n";
        cin >> x >> y;
        x = abs(x);
        y = abs(y);
        z = x + y;
        cout << "Сумма: " << z << endl;
        z = x - y;
        cout << "Разность: " << z << endl;
        z = x * y;
        cout << "Умножение: " << z << endl;
        z = x / y;
        cout << "Деление: " << z << endl;
    }

    return 0;
}