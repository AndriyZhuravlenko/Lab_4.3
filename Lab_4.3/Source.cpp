// Lab_04_3.cpp 
// Журавленко Андрій 
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 6 
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (c < 0 && b != 0)
			F = a * pow(x, 2) + pow(b, 2) * x;
		else
			if (c > 0 && b == 0)
				F = (1 * x + a)/(x + c);
			else
				F = 1 * x / c;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}