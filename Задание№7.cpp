

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int X1, Y1, X2, Y2, X3, Y3;
	int qwe;


	cout << " Выберите способ вычисления площади. 1-через длины сторон. 2-через координаты.\n";
	cin >> qwe;
	switch (qwe) {

	case 1:
	{
		double a, b, c, S, p;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "c = ";
		cin >> c;
		

        if (a >= b + c || b >= a + c || c >= b + a) {
			cout << "одна сторона должна быть   меньше суммы двух других сторон.";
			return 0;
		}
		if (a <= 0 || b <= 0 || c <= 0) {
				cout << "сторона не может быть отрицательной";
        }
		else {
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << S;
		}
	}break;
	case 2:
	{
		int X1, Y1, X2, Y2, X3, Y3, S;

		cout << "X1,Y1" << endl;cin >> X1 >> Y1;
		cout << "X2,Y2" << endl;cin >> X2 >> Y2;
        cout << "X3,Y3" << endl;cin >> X3 >> Y3;

		


		if ((X1 == X2 && X2 == X3) || (Y1 == Y2 && Y2 == Y3) || (X1 / (Y1 + Y2 + Y3) == X2 / (X1 + X2 + X3) == X3 / (X1 + X2 + X3))) {

			cout << "Ошибка.Все координаты находятся на одной прямой";

		}
		if (((X1 == X2) && (Y1 == Y2)) || ((X1 == X3) && (Y1 == Y3)) || ((X2 == X3) && (Y2 == Y3))) {
				cout << "Точки координат совпадают";

		}
		else {
			S = abs(((X1 - X3) * (Y2 - Y3)) - ((Y1 - Y3) * (X2 - X3))) * 0.5;
			cout << "S = " << S << "\n";
		}


	}break;
	default: cout << "ОШИБКА";
	}



}
	
	
	
	
	
	
	
	
	

