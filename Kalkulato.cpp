#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "RUS");
    int a, b, c, sum;
    cout << "Выберите операцию: ";
    cout << " \n1. Сложение";
    cout << " \n2. Вычитание";
    cout << " \n3. Частное";
    cout << " \n4. Произведение";
    cout << " \n5. Возведение в степень";
    cout << " \n6. Нахождения квадратного корня ";
    cout << " \n7. Нахождение 1 процента от числа ";
    cout << " \n8. Найти факториал числа";
    cout << " \n9. Выйти из программы.";

    while (true)
    {
        cout << "\nВыберите операцию: ";
        cin >> a;
        if (a == 1) {
            cout << "Введите первое число: ";
            cin >> b;
            cout << "Введите второе число: ";
            cin >> c;
            int d = b + c;
            cout << "Сумма чисел: " << d;
        }
        else if (a == 2) {
            cout << "Введите первое число: ";
            cin >> b;
            cout << "Введите второе число: ";
            cin >> c;
            int d = b - c;
            cout << "Вычитание чисел: " << d;
        }
        else if (a == 3) {
            cout << "Введите первое число: ";
            cin >> b;
            cout << "Введите второе число: ";
            cin >> c;
            int d = b / c;
            cout << "Частное чисел: " << d;
        }
        else if (a == 4) {
            cout << "Введите первое число: ";
            cin >> b;
            cout << "Введите второе число: ";
            cin >> c;
            int d = b * c;
            cout << "Произведение чисел: " << d;
        }
        else if (a == 5) {
            cout << "Введите число: ";
            cin >> b;
            cout << "Введите степень ";
            cin >> c;
            sum = b;
            int i = 2;
            while (i <= c)
            {
                i++;
                sum = sum * b;
            }
            cout << "Итог: " << sum << endl;
        }
        else if (a == 6) {
            cout << "Введите число: ";
            cin >> b;
            int d = sqrt(b);
            cout << "Итог: " << d;
        }
        else if (a == 7) {
            cout << "Введите число: ";
            cin >> b;
            int d = b / 100;
            cout << "Итог: " << d;
        }
        else if (a == 8) {
            cout << "Введите число: ";
            cin >> b;
            int n = 1;
            for (int i = 1; i <= b; i++)
            {
                n *= i;
            }
            cout << "Итог: " << n;
        }
        else if (a == 9)
        {
            break;
        }


    }
}