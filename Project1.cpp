
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	
	

	bool cvb = true;

	cout << "ИГРА УГАДАЙ ЧИСЛО" << endl
		<< "Привет, Игрок" << endl
		<< "Я задал число от 1 до 100. Угадаешь?" << endl
		<< "У тебя 5 попыток. Удачи!" << endl;
              int vibor, pk, popitka;
	do
	{
		pk = rand() % 100 + 1;
	

		do {
			for (popitka = 0; popitka < 5; popitka++) 
			{
				cout << "Введите число\n"; cin >> vibor;
				if (pk > vibor) {
					cout << "Загаданное число больше\n";
				}
				if (pk < vibor) {
					cout << "Загаданное число меньше\n";
				}
				if (pk == vibor) {
					cout << "Поздравляю! Вы угадали\n";
					cvb = false;
					break;
				}
			}
			
			

		} while (!pk);
		if (cvb) cout << "Вы проиграли. Было загадано:  ";
		cout << pk << "   Хочешь еще?(1-ДА)\n";
		cin >> pk;
	} while (pk == 1);
}