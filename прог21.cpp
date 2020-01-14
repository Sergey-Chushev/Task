
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int beta = 0;
	int a[10][8] = {};

	srand(time(0));
	setlocale(LC_ALL, "rus");
	int i = rand() % 10;
	int j = rand() % 8;
	a[i][j] = 1;
	cout << "Stroka, Stolb" << endl;
	do {
		bool flag = false;

		cin >> i >> j;
		if (i > 9 || j > 7 || i < 0 || j < 0) {//ok
			cout << "Выход за границы массива" << endl;
			//flag = true;
			continue;
		}
		
		if (a[i][j] == 1) {//ok
			cout << "Win!";
			return 0;
		}
		//cout << "hjgjhg";
		if (a[i][j] == 2) {
			cout << "Takoe bilo" << endl;
			//flag = true;
		}
		if (a[i][j] !=1 && !flag) {
				cout << "Нет" << endl;
				a[i][j] = 2;
				beta++;
		}
				
	}while (beta < 5);
	cout << "GAME OVER";
}

