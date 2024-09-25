#include "FirstLaba.h"
#include <string>
#include <fstream>
#include <iostream>
#include <math.h>

using namespace std;

FirstLaba::FirstLaba(){
}

FirstLaba::~FirstLaba(){
}

void FirstLaba::FirstSection() {
	string line;
	ifstream in("poem.txt");
	if (in.is_open()){
		while (getline(in, line)){
			cout << line << endl;
		}
	}
	in.close();

}

void FirstLaba::SecondSection() {
	int t;
	cout << "Введите температуру по Цельсию" << endl;
	cin >> t;
	cout <<"Температура по Фаренгейту: " << t * 9 / 5 + 32 << endl;
}

void FirstLaba::ThirdSection() {
	string in1, in2;
	cout << "Введите первую дробь: ";
	cin >> in1;
	cout << "Введите вторую дробь: ";
	cin >> in2;
	int a[]{ in1[0] - '0', in1[2] - '0' } ; // - '0' для привидения типов
	int b[]{ in2[0] - '0', in2[2] - '0' };
	int c[]{ a[0] * b[1] + a[1] * b[0], a[1] * b[1] };
	cout << c[0] << "/" << c[1] << endl;

}

void FirstLaba::FourthSection() {
	int funts, shilling, pens;
	cout << "Введите количество фунтов: ";
	cin >> funts;
	cout << "Введите количество шиллингов: ";
	cin >> shilling;
	cout << "Введите количество пенсов: ";
	cin >> pens;
	double new_pens = shilling / 20. + pens / 12. / 20.;
	cout << "Десятичных фунтов: \u00A3" << round(new_pens * 100)/100 + funts<< endl;
}

void FirstLaba::FithSection() {
	double new_funts;
	cout << "Введите количество фунтов: ";
	cin >> new_funts;
	int funts = (int)new_funts;
	int pens = (int)(new_funts * 100) % 100;
	int a[]{ (pens / 10) % 10, pens % 10}; // a[0] - 0 - для ширлингов,  _ a[1] - 0,0_ - для пенсов
	int shirling = a[0] * 2;
	pens = a[1] * 2 * 1.2;
	if (pens >= 12) {
		shirling += (pens / 12);
		pens %= 12;
	}
	printf("Эквивалентная сумма в старой форме записи: £: %d.%d.%d \n", funts, shirling, pens);
}