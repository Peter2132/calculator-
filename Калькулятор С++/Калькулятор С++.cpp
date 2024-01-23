#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    int choice, a, b;

    while (true) {
        
        cout << "Функции калькулятора:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Частное\n";
        cout << "4. Произведение\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Выйти из программы\n";

        
        cout << "Выберите функцию (1-9): ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            //int sum = a + b вызывает ошибку cout << "Сумма чисел = " << sum << endl;
            cout << "Сумма чисел = " << a + b << endl;
            break;

        case 2:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            //int min = a - b;
            cout << "Вычисление чисел = " << a - b << endl;
            break;
        
        case 3:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            
            cout << "Частное чисел = " << a / b << endl;
            break;
            

        case 4:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Умножение чисел = " << a * b << endl;
            break;

        case 5:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Возведения в степень = " <<  pow (a, b) << endl;
            break;

        case 6:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Возведения в квадрат = " << sqrt(a) << endl;
            break;
            
        
        case 7:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "1 % от числа = " << a * 0.01 << endl;
            break;
            

        case 8:
            cout << "Введите первое число: ";
            cin >> a;
            if (a < 0) {
                cout << "Только положительные" << endl;
            }
            else {
                
                long long factorial = 1;
                for (int i = 1; i <= a; ++i) {
                    factorial *= i;
                }

                cout << "Факториал числа = " << factorial << endl;
            }
            break;

        case 9:
            cout << "Программа завершена." << endl;
            return 0;


        }
    }

   
}
