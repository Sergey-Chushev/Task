

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int M;
	double x, y;
	cout << " Введите первое число\n";
	cin >> x;
	cout << " Введите второе число\n";
	cin >> y;
	cout << " Выберите операцию: \n";
	cout << " Сложение '1' \n";
	cout << " Вычитание '2'\n";
	cout << " Умножение '3'\n";
	cout << " Деление '4'\n";
	cin >> M;
	switch (M)
	{
	case 1:

	{
		cout << x << "+" << y << "=" << x + y << endl;
		break;
	}
	case 2:

	{
		cout << x << "-" << y << "=" << x - y << endl;
		break;
	}
	case 3:
	{
		cout << x << "*" << y << "=" << x * y << endl;
		break;
	}
	case 4:
	{
		cout << x << "/" << y << "=" << x / y << endl;
		break;
	}
	default:
		cout << "Ошибка" << endl;
	}




	}