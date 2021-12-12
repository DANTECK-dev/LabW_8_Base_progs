//#define _CRT_SECURE_NO_WARNINGS
//#define N 10
#define M 1000

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>

using namespace std;

void *F(char* str, char *maxCouTok, char *res_str) {

	char token{ '\0' };
	int countS(0), maxCount(0), len;

	len = strlen(str);
	*maxCouTok = str[0];

	cout << "Sorce string: ";
	for (int i = 0; i < len; i++) {
		token = str[i];
		countS = 0;
		if (token == ' ') continue;

		for (int j = 0; j < len; j++) {

			if (str[j] == token) {
				countS++;
			}
		}

		if (countS > maxCount) {
			maxCount = countS;
			*maxCouTok = token;
		}

		cout << str[i] << " ";
	}

	//cout << endl << "Result string: ";
	for (int i = 0; i < len; i++) {

		if (str[i] == *maxCouTok) continue;
		res_str[i] = str[i];

		//cout << res_str[i] << " ";


	}

	cout << endl << "maxCouTok: " << *maxCouTok
		<< "\tmaxCount: " << maxCount << endl;
	return 0;
}



void main() {
	setlocale(LC_ALL, "rus");
	/*Написать функцию, которая принимает строку и переменную - символ.Находит в
	строке наиболее часто встречаемый символ и сохраняет его в переменной -
	аргументе. Возвращает копию исходной строки, но без этого символа.*/ 
	char str[M]{ '\0' }, 
	     ress_str[M]{ '\0' },
		 p{ '\0' };
	int len;

	char* yk1 = &str[0];
	char* yk2 = &p;
	char* yk4 = &ress_str[0];

	cout << "Enter the text: ";
	gets_s(str);
	len = strlen(str);
	F(yk1, yk2, yk4);

	cout << endl << "Result string: ";
	for (int i = 0; i < len; i++) {
		if (ress_str[i] == '\0') continue;
		cout << ress_str[i] << " ";
	}
	cout << endl;

}