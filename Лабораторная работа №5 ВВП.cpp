#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, x1, x2, y1, y2, x3, y3;
    double ans1 = 0, ans2 = 0, ans3 = 0, a, b, c, p, s;
    cout << "Введите номер задания:" << endl;
    cin >> num;

    if (num == 1) {
        cout << "Введите x1 и y1:\n";
        cin >> x1 >> y1;
        cout << "Введите x2 и y2:\n";
        cin >> x2 >> y2;
        ans1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        cout << "Расстояние: " << ans1 << endl;
    }

    if (num == 2) {
        cout << "Введите x1 и y1:\n";
        cin >> x1 >> y1;
        cout << "Введите x2 и y2:\n";
        cin >> x2 >> y2;
        cout << "Введите x3 и y3:\n";
        cin >> x3 >> y3;
        ans1 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
        ans2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        ans3 = ans1 + ans2;
        cout << "Длина AC: " << ans1 << endl;
        cout << "Длина BC: " << ans2 << endl;
        cout << "Сумма AC и BC: " << ans3 << endl;
    }
    
    if (num == 3) {
        cout << "Введите x1 и y1:\n";
        cin >> x1 >> y1;
        cout << "Введите x2 и y2:\n";
        cin >> x2 >> y2;
        cout << "Введите x3 и y3:\n";
        cin >> x3 >> y3;
        ans1 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
        ans2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        ans3 = ans1 * ans2;
        cout << "Произведение AC и BC: " << ans3 << endl;
    }

    if (num == 4) {
        cout << "Введите x1 и y1:\n";
        cin >> x1 >> y1;
        cout << "Введите x2 и y2:\n";
        cin >> x2 >> y2;
        a = abs(max(x1, x2) - min(x1, x2));
        b = abs(max(y1, y2) - min(y1, y2));
        p = 2 * (a + b);
        s = a * b;
        cout << "Периметр: " << p << endl;
        cout << "Площадь: " << s << endl;
    }
    
    if (num == 5) {
        cout << "Введите x1 и y1:\n";
        cin >> x1 >> y1;
        cout << "Введите x2 и y2:\n";
        cin >> x2 >> y2;
        cout << "Введите x3 и y3:\n";
        cin >> x3 >> y3;
        a = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
        b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        p = a + b + c;
        cout << "Периметр: " << p << endl;
        p /= 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Площадь: " << s << endl;
    }

    return 0;
}