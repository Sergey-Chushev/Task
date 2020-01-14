// ПРОГ22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void swap(int* S, int* D) {//сделал
	int sw;
	sw = *D;//* указатель, &-взятие адреса(извлечение  адреса переменной)
	*D = *S;
	*S = sw;
}
int msort(int* z, int* x, int* c) {//сделал
	if (*z > *x) {
		swap(z, x);
	}
	if (*x > *c) {
		swap(*x, *c);
	}
	if (*c > * z) {
		swap(c, z);
	}
	return *z;
	
}
void info(const int* a) {//сделал
cout << "Address: " << a << "    " << "Value: " << *a << endl;
}
int* add(int* ZZ, const int*BB) {
	*ZZ = *ZZ + *BB;
	return ZZ;
}
int main()
{
	int a = 1; int* aa = &a;
	int b = 2; int* bb = &b;
	int c = 3; int* cc = &c;
	info(&a); info(bb); info(cc);
	cout << msort(aa, bb, cc) << endl;
	cout << "Address:" << add(aa,bb)<<"    "<< "Value: " ;
	add(aa, cc);
	cout << *aa << ' ';
	cout << *&a << ' ';
	cout << *add(&a, cc);


}
