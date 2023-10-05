// Lab_03_4.cpp
// < Чучман Володимир >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 26
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний радіус
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((x >= 0 && x <= R && y >=0 && y <= sqrt (R * R - x * x)) ||
		(x >= -R && x <= 0 && y >= -sqrt(R * R - x * x) && y <=0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}