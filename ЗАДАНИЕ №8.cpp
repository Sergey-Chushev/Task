

#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	char  M;

	double x, y;
	cin >> x;cin >> M;cin >> y;
	switch (M)
	{
	case '+':
    {
		cout << x << "+" << y << "=" << x + y << endl;
		break;
	}
	case '-':
	{
		cout << x << "-" << y << "=" << x - y << endl;
		break;
	}
	case '*':
	{
		cout << x << "*" << y << "=" << x * y << endl;
		break;
	}
	case '/':
	{    
		if( y!=0){
		cout << x << "/" << y << "=" << x / y << endl;
		}
		  if ( y == 0) {
			cout << "Ошибка" << endl;

		  }
          break;
		}
	default:
		cout << "Ошибка" << endl;
	} 





	}