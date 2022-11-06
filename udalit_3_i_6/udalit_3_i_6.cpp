// udalit_3_i_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    /*
    Задание 4: Пользователь вводит любое целое число. Необходимо из этого целого числа удалить
все цифры 3 и 6 и вывести обратно на экран
    */
    setlocale(LC_ALL, "Russian");   //русификатор консоли
    int i = 0, a = 0, k;

    cout << "Введите число: ";
    cin >> k;
    cout << endl;

    while (k > 0)
    {
        if (k % 10 != 3 && k % 10 != 6)
        {
            a *= 10;
            a += k % 10;
        }
        k /= 10;
    }

    cout << "Полученное число: ";

    while (a > 0)
    {
        cout << a % 10;
        a /= 10;
    }
    cout << endl << endl;

    system("pause");
    return 0;



}

