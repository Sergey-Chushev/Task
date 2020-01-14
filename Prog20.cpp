// Prog20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void CCTV(int a[], int n) {
	int TTR = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i] ) {
				TTR = a[i];
				a[i] = a[j];
				a[j] = TTR;
			}
		}
	}
}

void S(int* a, int n) {

	for(int i=0; i < n; i++)
	cout << a[i] << ' ';
	
}

int main()
{
	int n;
	setlocale(LC_ALL, "rus");
	cout << "Введите размеро массива: "; cin >> n;
	 int* a = new int[n];
	 for (int i = 0; i < n; i++) {
		 cin >> a[i];
	 }
	 CCTV(a, n);
	  S(a, n);
	 delete[]a;
	return 0;
}
