
#include <iostream>

using namespace std;
	int main() {
		
		
			long long  n, p = 1, x = 1;

			cin >> n;
			if (n == 0)cout << 0;
			else
			{
				while ((p *= 2) <= n)
					x++;
				
			}
			cout <<x;
			return 0;
	}


