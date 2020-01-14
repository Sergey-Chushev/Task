// ПРОГ15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>

using namespace std;

void sort(int* a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n, s;
	cout << "введите количество сигналов ";
	cin >> n;
	if (!n) {
		cout << "ОШИБКА" << endl;
		return 1;
	}
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}
	int m = min(n, 5);
	int m2 = m - 1;
	for (int i = 0; i < n; i++) {
		sort(a, i + 1);
		for (int j = m2; j < m; j++) {
			cout << a[m - 1 - j] << ' ';
		}
		cout << endl;
		if (m2) m2--;
	}

	delete[] a;
}








