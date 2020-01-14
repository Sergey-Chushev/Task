#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	

	srand(time(0));//МАССИВ ИЗ РАНДОМНЫХ ЭЛЕМЕНТОВ
	
	int a[20];

	for (int i = 0; i < 20; i++) {
		a[i] = rand() % 201 - 100;
		cout << a[i] << ' ';
	}

	int max = a[0];
	for (int i = 1; i < 20; i++) {
		if (a[i] > max) {
			max = a[i];
		
		}
	}
	cout << endl;
	cout << "\nМаксимальный элемент массива: " << max;
	int min = a[0];

	for (int i = 1; i < 20; i++) {
		if (a[i] < min) {
			min = a[i];
			
		}
	}
	cout << endl;

	cout << "Минимальный элемент массива: " << min;
	return 0;
}