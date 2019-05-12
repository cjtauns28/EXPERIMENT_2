#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char pg;
	int hrs, amt; 
	cout << "Enter your purchased subscription package "; 
	cin >> pg;
	cout << "Enter number of hours used ";
	cin >> hrs;
	switch (pg)
	{
	case 'a':
	case 'A':
		if (hrs > 10)
			amt = 995 + 20 * (hrs - 10);
		else
			amt = 995;
		cout << "Your total amount due for this month is: " << amt << " pesos";
		break;
	case 'b':
	case 'B':
		if (hrs > 20)
			amt = 1495 + 10 * (hrs - 20);
		else
			amt = 1495;
		cout << "Your total amount due for this month is: " << amt << " pesos";
		break;
	case 'c':
	case 'C':
		amt = 1995;
		cout << "Your total amount due for this month is: " << amt << " pesos";
		break;
	
	}
	_getch;
	return 0;

}
