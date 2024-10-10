// project1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    cout << "Введите первое число: ";
    int num1;
    cin >> num1;

    cout << "Введите второе число: ";
    int num2;
    cin >> num2;

    int p = num1 * num2;
    cout << "Произведение чисел равно: " << p;

    return 0;
}


