// Labs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "FirstLaba.h"

using namespace std;

int main()
{   
    setlocale(LC_ALL, ""); // Чиним шрифты
    FirstLaba fl;
    int chooser;
    cout << "Введите номер задания ";
    cin >> chooser;
    switch (chooser)
    {
    case 1:
        fl.FirstSection();
        break;

    case 2:
        fl.SecondSection();
        break;

    case 3:
        fl.ThirdSection();
        break;

    case 4:
        fl.FourthSection();
        break;

    case 5:
        fl.FithSection();
        break;

    default:
        break;
    }
    return 0;
}


