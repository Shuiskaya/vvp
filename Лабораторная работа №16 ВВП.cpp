#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, n, a, d, b;
    cout << "Если вам необходимо завершить программу, введите 0.\n\n";
    cout << "---------------------------\n\n";
    cout << "Введите номер задания:\n";

    cin >> num;
    while (num != 0) {

        if (num == 1) {
            cout << "Введите целое число N:\n";
            cin >> n;
            int *mas = new int[n];
            cout << "Полученный массив размера N, содержащий N первых положительных нечетных чисел:\n";
            for (int k = 1, i = 0; i < n; k += 2, i++) {
                mas[i] = k;
                cout << mas[i] << " ";
            }
            cout << "\n\n";
            delete[] mas;
            mas = 0;
        }

        if (num == 2) {
            cout << "Введите размер массива N, член A и знаменатель D геометрической прогрессии:\n";
            cin >> n >> a >> d;
            int *mas = new int[n];
            //mas[0] = a;
            cout << "Полученный массив размера N, содержащий N первых членов данной прогрессии:\n";
            //cout << mas[0] << " ";
            for (int i = 0; i < n; i++, a *= d) {
                mas[i] = a;
                cout << mas[i] << " ";
            }
            cout << "\n\n";
            delete[] mas;
            mas = 0;
        }

        if (num == 3) {
            cout << "Введите целые числа N, A и B:\n";
            cin >> n >> a >> b;
            if (n < 3) {
                cout << "Введено неверное значение N.\n\n";
            }
            else {
                int *mas = new int[n];
                mas[0] = a;
                mas[1] = b;
                mas[2] = a + b;
                cout << "Полученный массив равен:\n";
                cout << mas[0] << " " << mas[1] << " " << mas[2] << " ";
                for (int i = 3; i < n; i++) {
                    mas[i] = mas[i - 1] * 2;
                    cout << mas[i] << " ";
                }
                cout << "\n\n";
                delete[] mas;
                mas = 0;
            }
        }

        if (num == 4) {
            cout << "Введите размер массива A:\n";
            cin >> n;
            int* mas = new int[n];
            cout << "Введите массив А:\n";
            for (int i = 0; i < n; i++) {
                cin >> mas[i];
            }
            cout << "Новый массив имеет вид:\n";
            for (int i = 0; i < n / 2; i++) {
                cout << mas[i] << " ";
                cout << mas[n - i - 1] << " ";
            }
            if (n % 2 == 1) {
                cout << mas[n / 2];
            }
            cout << "\n\n";
            delete[] mas;
            mas = 0;
        }

        if (num == 5) {
            cout << "Введите размер массива A:\n";
            cin >> n;
            int* mas = new int[n];
            cout << "Введите массив А:\n";
            for (int i = 0; i < n; i++) {
                cin >> mas[i];
            }

            cout << "Новый массив имеет вид:\n";
            for (int i = 0; i < n; i += 2) {
                cout << mas[i] << " ";
            }

            for (int i = (n / 2) * 2 - 1; i > 0; i -= 2) {
                cout << mas[i] << " ";
            }

            cout << "\n\n";
            delete[] mas;
            mas = 0;
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