// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdib.h"
struct coef
{
	int a;
	int b;
	int c;
};
typedef struct coef sc;
int _tmain(int argc, _TCHAR* argv[])
{
	sc p;
	p.a = 0;
	int n;
	printf("vvedite chislo");
	scanf("%d", &n);
	sc *arr = new sc[n];
	for (int i = 0; i < n; i++)
	{
		arr[i].a = rand();
	}
	return 0;



