// strings1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	/*
	const char a[4] = " а ";
	const char e[4] = " и ";
	const char ia[4] = " я ";
	const char no[5] = " но ";
	const char kd[8] = " когда ";
	const char ec[7] = " если ";
	*/
	const int k = 6;

	char** a = new char*[k];
	a[0] = new char[4];
	strcpy_s(a[0], 4, " а ");
	a[1] = new char[4];
	strcpy_s(a[1], 4, " и ");
	a[2] = new char[4];
	strcpy_s(a[2], 4, " я ");
	a[3] = new char[5];
	strcpy_s(a[3], 5, " но ");
	a[4] = new char[8];
	strcpy_s(a[4], 8, " когда ");
	a[5] = new char[7];
	strcpy_s(a[5], 7, " если ");
	for (int i = 0; i < k; i++)
		cout << a[i] << endl;
	
	const int n = 200;
	char s[n];
	int res = 0;
	while (cin.getline(s, n))
	{
		char* p = new char;
		p = strstr(s, a[0]);
		for (; *p != NULL; res++)
		{
			while ((*p != ' ') && (*p != '\0'))
			{
				*p = '0';
				p++;
			}
			p = strstr(s, a[0]);
		}
	}
	cout << res;
	system("pause");
	return 0;
}

