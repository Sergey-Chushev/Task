

#include <iostream>
using namespace std;


int main()

{
	double X, x, v, t, a;
	cout << "x = ";
	cin >>  x;
	cout << "v = ";
	cin >> v;
	cout << "t = ";
	cin >> t;
	a = -9.8;
	cout << "X = " << x + v * t + a * t * t / 2;
	
	

	return 0;

 
}

