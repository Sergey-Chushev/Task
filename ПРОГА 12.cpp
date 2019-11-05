// ПРОГА 12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	bool iss = true;
	
	cout << "a="; cin >> a;
	
	for (int e = 2;e <= a-1;e++ ) {
		if (a % e == 0) {
			iss = false;
			break;
		}
	}

	if (iss == true) cout << "Простое";
	else cout << "Сложное";
}

