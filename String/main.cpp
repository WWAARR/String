﻿#include<iostream>
#include"String.cpp"
#include"String.h"
using namespace std;
using std::cout;

//#define CONSTRUCTORS_CHECK

void main()
{
	setlocale(LC_ALL, "");
#ifdef CONSTRUCTORS_CHECK
	cout << typeid("Hello").name() << endl;
	String str1 = "Hello";
	cout << str1 << endl;
	String str2 = str1;
	cout << str2 << endl;
	String str3;
	str3 = str2;
	cout << str3 << endl;
	cout << "\n------------------------\n";
	str2 = str2;
	cout << str2 << endl;
	cout << "\n------------------------\n";
	/*int a = 2;
	int b = 3;
	a = b;
	cout << a << endl;*/
#endif // CONSTRUCTORS_CHECK
	String str1 = "Hello";
	String str2 = "World";
	cout << "\n-------------------------\n";
	String str3;
	str3 = str1 + " " + str2;
	cout << str3 << endl;
	cout << "\n-------------------------\n";
}