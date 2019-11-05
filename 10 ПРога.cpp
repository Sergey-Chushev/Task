
#include <iostream>
#include <clocale>
#include < time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double ch;
	double ot = 1;
	int st;
	cout << "ch"; cin >> ch;
	cout << "st"; cin >> st;
	if (st == 0) 
	{
		if (ch == 0) 
		{
			cout << "Неопределено";
		}
		else
			cout << 1;
	}
	else {
		if (st > 0) {
			for (int i = 1;i<=st; i++) {
				ot *= ch;
			} 
			
		}
		else {
			if (ch == 0) {

				cout << "Error";
				return 1;
			}
			for (int i = 1; i <= -st; i++) {

				ot /= ch;

			}
		}
	}

	cout << ot;
}