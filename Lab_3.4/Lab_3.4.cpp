// Lab_03_4.cpp
// ������������ ����� 
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 20

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// ������������ � ����� ����
	if ((y <= 3 - (x - 2) * (x - 2)) && y >= abs(x))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}