// test.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char *p = new char[6];
	cin.getline(p, 6);
	cout << p;
	system("pause");
	return 0;
}

