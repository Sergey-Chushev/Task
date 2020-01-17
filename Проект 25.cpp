
#include <iostream>
#include <string.h>

using namespace std;

struct Student {
	char name[100];
	int group;
	int sec[5];
}stud[10];

int main() {
	stud[0] = { "Ivanov M.S",2,{4,5,4,3,5} }; //{5, 5, 5, 5, 5}}
	stud[1] = { "Divanov D.P",1,{3,5,4,4,3} };//{5, 5, 5, 5, 5}}
	stud[2] = { "Sefanov B.Y",3,{4,2,4,3,5} };//{5, 5, 5, 5, 5}}
	stud[3] = { "Kirilov F.A.",2,{2,5,3,4,5} };//{5, 5, 5, 5, 5}}
	stud[4] = { "Zasov S.P",2,{4,3,4,4,3} };//{5, 5, 5, 5, 5}}
	stud[5] = { "Mirov K.S",1,{3,5,2,4,5} };//{5, 5, 5, 5, 5}}
	stud[6] = { "Mario T.D",3,{4,2,4,2,5} };//{5, 5, 5, 5, 5}}
	stud[7] = { "Gopd W.N",3,{3,5,3,4,3} };//{5, 5, 5, 5, 5}}
	stud[8] = { "Dops H.Z",1,{2,5,3,4,2} };//{5, 5, 5, 5, 5}}
	stud[9] = { "Volov H.I",2,{4,5,4,4,5} };//{5, 5, 5, 5, 5}}
	//по алфавиту
	for (int i = 9; i >= 0; --i) {
		for (int j = 0; j < i; ++j) {
			if (strcmp(stud[j].name, stud[j + 1].name) != 0) {
				swap(stud[j], stud[j + 1]);
			}
		}
	}
	bool flag;
	for (int i = 0; i < 10; i++) {
		for (int mark = 0; mark < 5; mark++) {
			if (stud[i].sec[mark] < 3) {
				 flag = false;
				cout << stud[i].name <<' '<< stud[i].group <<endl;
				break;//чтоб двух челов не писало
			}
		}
	}
	if (flag) {
		cout << "no"<<endl;
	}
	return 0;
}
/*int main ()
{
  char fruit[] = "яблоко";                         // загаданный фрукт
  char answer[80];                                 // строка-ответ
 
  do
  {
     std::cout << "Угадайте мой любимый фрукт! >> ";
     std::cin  >> answer;
  } while ( strcmp(fruit, answer) != 0);           // пока фрукт не отгадан, цикл будет работать
 
  std::cout << "Правильный ответ!n";
  return 0;*/
