// прога23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cctype>
using namespace std;

bool CCTV(char s1[], int l) {
	string s;//строка
	for (int n = 0; n < l; n++) {//1
			if (isdigit(s1[n])) {// цифра или нет 
				s += s1[n];
			}
			else//2
			if (isalpha(s1[n])) {//буква или нет
				s1[n]=toupper(s1[n]);//из "а" в "А"
					s += s1[n];
			}
	}
	int d = s.length();//длина строки
	for (int i = 0; i < d / 2; ++i) {
		if (s[i] != s[d - i - 1]) {
			return false;
		}
	}
    return true;
}	
int main() {
	char aa[21];
	cin.getline(aa, 21);//ввод с пробелами
	int l = strlen(aa);
if (CCTV(aa,l)) {
		cout << "Palindrom";
}
	else {
		cout << "Nepalindrom";
	}
	return 0;
}