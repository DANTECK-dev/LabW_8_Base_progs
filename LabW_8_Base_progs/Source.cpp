//#define _CRT_SECURE_NO_WARNINGS
//#define __STDC_WANT_LIB_EXT1__ 1
//#define N 10
#define M 200

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include<cstring>

using namespace std;

char *F(char str[], char* maxCouTok ) {

	char symbol;
	int countS(0), maxCount(0);
	char *res_str;

	int len = strlen(str);
	maxCouTok = *&str;
	res_str = new char[len]{'\0'};

	cout << "Sorce string: ";
	for (int i = 0; i < len; i++) {
		symbol = *(str + i);
		countS = 0;
		if (symbol == ' ') continue;

		for (int j = 0; j < len; j++) {

			if (*(str + j) == symbol) {
				countS++;
			}
		}

		if (countS > maxCount) {
			maxCount = countS;
			*maxCouTok = symbol;
		}

		cout << *(str + i) << " ";
	}
	cout << endl;
	//cout << endl << "Result string: ";
	for (int i = 0; i < len; i++) {

		if (*(str+i) == *maxCouTok) continue;
		*(res_str+i) = *(str+i);

		cout << res_str[i] << " ";


	}
	cout << endl;	
	cout << endl << "maxCouTok: " << *maxCouTok
		<< "\tmaxCount: " << maxCount << endl;
	return &res_str[0];
}



void main() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	/*Написать функцию, которая принимает строку и переменную - символ.Находит в
	строке наиболее часто встречаемый символ и сохраняет его в переменной -
	аргументе. Возвращает копию исходной строки, но без этого символа.*/ 

	int n = M;
	char p;
	char* str = new char[M];
	//char* ress_str = new char[M];
	char* maxCouTok = &p;
	//char* yk1 = &ress_str[0];
	//char* yk = &maxCouTok;

	cout << "Enter the text: ";
	gets_s(str,n);


	char* ress_str = F(str, *&maxCouTok);

	int len = strlen(ress_str);
	cout << "Result string: ";

	for (int i = 0; ress_str[i]!='\0'; i++)
	{
		//if (*(ress_str+i) == '\0') continue;
		cout << *(&ress_str+i) << " ";
	}
	cout << endl;

}

