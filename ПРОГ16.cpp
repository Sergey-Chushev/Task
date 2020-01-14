
#include <iostream>
using namespace std;
void fact(int n) {//функция
	int temp = 2;//создал переменную
	while (n > 1) {//цикл
		int k = 0;
		while (n % temp == 0) {//( если наше число делится на temp без остатка)
			k++;
			n /= temp;//обновление переменной
		}
		if (k > 0) {
			cout << temp;
			if (k > 1) cout << "^" << k;
			//if (n > 1) cout << "*";
			cout << "*";
		}
		if (temp == 2) temp++;//увеличение переменной на 1
		else temp += 2;//увеличение переменной на 2
	}
}
int main()
{
	int n;
	cin >> n;
	fact(n);
	cout << endl;
}