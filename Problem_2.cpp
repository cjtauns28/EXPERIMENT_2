#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float gal, unp, bill;
	
	cout << "Enter the number of gallons used this month and the previous month ";
	cin >> gal;
	cout << "Enter the amount of your unpaid balance ";
	cin >> unp;
	if (unp > 0)
	{
		bill = 55 + unp + 1.10 * (gal);
		cout << "Your total water bill is " << bill << " pesos";
	}
	else
	{
		bill = 35 + 1.10 * (gal);
		cout << "Your total water bill is " << bill << " pesos";

	}
	_getch;
	return 0;
}