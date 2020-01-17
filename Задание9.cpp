// Задание9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

//

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	 setlocale(LC_ALL, "Russian");
	int vibor, b, pk, popitka;
	srand(time(NULL));
	
	cout << "ИГРА УГАДАЙ ЧИСЛО" << endl
		<< "Привет, Игрок" << endl
		<< "Я задал число от 1 до 100. Угадаешь?" << endl
		<< "У тебя 5 попыток. Удачи!" << endl;
	do
	{
		pk = rand() %  100+ 1;
		popitka = 0;
		do
		{
			if (popitka == 5) {

			}

			cout << " Введите число \n";
			cin >> vibor;
			if (pk > vibor || pk < vibor) {
				if (pk > vibor) {
					cout << "Загаданное число больше\n";
				}
				if (pk < vibor) {
					cout << "Загаданное число меньше\n";
				}
				popitka++;
			}
			if (pk == vibor) {
				cout << "Поздравляю! Вы угадали";

			}


		} while;
		cout << "Вы проиграли. Было загадано:  " << pk << "   Хочешь еще?(1-ДА)\n";
			cin >> pk ;
	}while (pk == 1);
}




