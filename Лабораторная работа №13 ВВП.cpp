#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    double n, ans, j, a;
    bool check;
    cout << "Если вам необходимо завершить программу, введите 0.\n\n";
    cout << "---------------------------\n\n";
    cout << "Введите номер задания:\n";

    cin >> num;
    while (num != 0) {

        if (num == 1) {
            cout << "Введите цену 1 кг конфет:\n";
            cin >> n;
            n /= 1000;
            ans = n * 100;
            for (int i = 100; i <= 1000; i += 100) {
                ans = n * i;
                cout << "Стоимость " << double(i) / 1000 << " кг конфет: " << ans << "\n";
            }

            cout << "\n---------------------------\n\n";
        }

        if (num == 2) {
            cout << "Введите целое число N:\n";
            cin >> n;
            ans = 1;
            for (j = 1; j < n; j += 0.1) {
                ans *= j;
                //cout << ans << " " << j << endl;
            }
            ans *= n;
            cout << "Произведение 1.1 * 1.2 * ... * N равно " << ans << "\n\n";

            cout << "---------------------------\n\n";
        }

        if (num == 3) {
            cout << "Введите целое число N:\n";
            cin >> n;
            ans = 0;
            for (int i = 1; i <= (2 * n - 1); i += 2) {
                ans += i;
                cout << "Текущее значение суммы : " << ans << "\n";
            }
            cout << "Квадрат числа N: " << ans << "\n\n";

            cout << "---------------------------\n\n";
        }

        if (num == 4) {
            cout << "Введите вещественное число А и целое число N:\n";
            cin >> a >> n;

            ans = 1;
            j = a;
            for (int i = 1; i <= n; i++) {
                ans += a;
                a *= j;
            }

            cout << "Полученная сумма равна: " << ans << "\n";
            cout << "---------------------------\n\n";
        }

        if (num == 5) {
            cout << "Введите вещественное число А и целое число N:\n";
            cin >> a >> n;
            j = a;
            a = -a;
            ans = 1 + a; 
            for (int i = 2; i <= n; i++) {
                a *= -j;
                ans += a;
                //cout << a << " " << i << endl;
            }

            cout << "Полученная сумма равна: " << ans << "\n";
            cout << "---------------------------\n\n";
        }

        if (num < 0 || num > 5) {
            cout << "К сожалению, такого задания нет.\n\n";
            cout << "---------------------------\n\n";
        }

        cout << "Введите номер задания:\n";
        cin >> num;
    }
    return 0;
}