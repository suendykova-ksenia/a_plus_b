﻿#include <iostream>
using namespace std;

float a, b;
int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите два числа и программа посчитает их сумму:" << endl;
    cout << "a = ";
    cin >> a;
f1:

    if ((cin.fail() == 0) && (a))
    {
        bool success = true; // если нет ошибок в входном потоке даём true для стопа цикла
    }
    else {               // если есть ошибки
        cout << "ОШИБКА: Введенные данные не соответствуют формату. Осуществите ввод еще раз. " << endl;
        cin.clear();    //очищает ошибки входного потока для флажка cin.fail
        cin.ignore(cin.rdbuf()->in_avail());  //удаляем символы в буфере
        cout << "a = ";
        cin >> a;
        goto f1;
    }

    cout << "b = ";
    cin >> b;
f2:

    if ((cin.fail() == 0) && (b))
    {
        bool success = true; // если нет ошибок в входном потоке даём true для стопа цикла
    }
    else {               // если есть ошибки
        cout << "ОШИБКА: Введенные данные не соответствуют формату. Осуществите ввод еще раз. " << endl;
        cin.clear();    //очищает ошибки входного потока для флажка cin.fail
        cin.ignore(cin.rdbuf()->in_avail());  //удаляем символы в буфере
        cout << "b = ";
        cin >> b;
        goto f2;
    }
    cout << "a + b = " << float(a + b) << endl;

    system("pause");
}
