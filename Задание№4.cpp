
#include <iostream>
using namespace std;
int main()
{
	{
		int a, b, c;
		setlocale(LC_ALL, "Russian");
		cout << "с помощью дополнительной переменной\n";
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		c = a;
		a = b;
		b = c;
		cout << " a = " << a << "\n";
		cout << " b = " << b << "\n";
		system("pause");
	}
	{
		int a, b;
        cout << "без помощи дополнительной переменной\n";
		cout << " a = ";
		cin >> a;
		cout << " b = ";
		cin >> b;
		a = a + b;
		b = a - b;
		a = a - b;
		

		cout << " a = " << a << "\n";
		cout << " b = " << b << "\n";
	}
	return 0;


    
}

