// Lab_03_4.cpp
// Малаховський Назар 
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 20

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі
	if ((y <= 3 - (x - 2) * (x - 2)) && y >= abs(x))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}