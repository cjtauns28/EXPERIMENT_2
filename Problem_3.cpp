#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
	int x, y;
	double  V;
	const double z = 2.5;
	cout << "Enter your x and y values" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y; 
	 
	switch (x)
	{
	case 1:
		if (y > 1 && y < 5)
			V = x* y * z;
		else if (y >= 5)
			V = x + (y / z);
		cout << setprecision(2) << fixed;
		cout << "The value of V is " << setw(10) << V;
		break;
	case 2:
		if (y <= 5)
			V = abs((x - y) / z);
		else if (y > 5)
			V = x - sqrt(y + z);
		cout << setprecision(2) << fixed;
		cout << "The value of V is " << setw(10) << V;
		break;
	default: 
		V = x + y + z;
		cout << setprecision(2) << fixed;
		cout << "The value of V is " << setw(10) << V;
	}

	_getch;
	return 0;
}

