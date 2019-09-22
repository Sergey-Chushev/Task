
#include <iostream>
#include<Windows.h>
using namespace std;
int main()
{
	{
		int x, y;
		cout << "     int.\n";
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;

		cout << "x+y = " << x + y << "\n";
		cout << "x-y = " << x - y << "\n";
		cout << "x*y = " << x * y << "\n";
		cout << "x/y = " << x / y << "\n";
		system("pause");
	}


	{
		double x, y;
		cout << "     double.\n";
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
		cout << "x+y = " << x + y << "\n";
		cout << "x-y = " << x - y << "\n";
		cout << "x*y = " << x * y << "\n";
		cout << "x/y = " << x / y << "\n";
		system("pause");
	}

	{
		int x;
		double y;
		cout << " int(x) and double(y).\n";
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
		cout << "x+y = " << x + y << "\n";
		cout << "x-y = " << x - y << "\n";
		cout << "x*y = " << x * y << "\n";
		cout << "x/y = " << x / y << "\n";
		system("pause");
	}

	{
		double x;
		int y;
		cout << " double(x) and int(y).\n";
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
		cout << "x+y = " << x + y << "\n";
		cout << "x-y = " << x - y << "\n";
		cout << "x*y = " << x * y << "\n";
		cout << "x/y = " << x / y << "\n";
	}



}










