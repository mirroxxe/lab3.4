// Lab_03_4.cpp
// < ������ ��������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 26
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� �����
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ������ ����
	if ((x >= 0 && x <= R && y >=0 && y <= sqrt (R * R - x * x)) ||
		(x >= -R && x <= 0 && y >= -sqrt(R * R - x * x) && y <=0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}