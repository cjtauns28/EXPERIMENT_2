#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int fib;
	int st = 0, nd = 1;
	
	for (fib = 1; fib <= 10946; fib++)
	{
		fib = st + nd;
		st = nd;
		nd = fib;
		cout << fib << ", ";
	}
	_getch;
	return 0;
}