#include <iostream>
#include <conio.h>
	using namespace std;
	int main()
	{
		int n, i, j, sum;
		cout << "Summation machine" << endl;
		cout << "Enter a number: ";
		cin >> n;

		while (n >= 1)
		{


			j = 0;
			for (i = 0; i <= n; i++)
			{
				sum = i + j;
				j = sum;
			}
			cout << "The sum of all whole numbers from 1 to " << n << " is " << sum << endl;
			cout << "Enter a number: ";
			cin >> n;
		}
				cout << "Thank you!" << endl;
		
	
			
	_getch;
	return 0;
	}