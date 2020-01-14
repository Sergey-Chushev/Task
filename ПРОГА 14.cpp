// ПРОГА 14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	long long s, l1, r1, l2, r2, x1, x2;
	cin >> s >> l1 >> r1 >> l2 >> r2;
	bool res = false;
	for (x1 = l1; x1 < r1; x1++) {
		x2 = s - x1;
		if ((x2 >= l2) && (x2 <= r2)) {
			cout << x1 << ' ' << x2 << endl;
			res = true;
			break;
		}
	}
	if (!res) {
		cout << "-1" << endl;
		}
	return 0;
}

