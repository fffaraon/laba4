
#include "stdafx.h"
#include "math.h"
#include "stdio.h"

hgjfj
int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	FILE*f;
	errno_t err;
	err=fopen_s(&f,"T:\\'È-32\\Tanya\\3","r");
	if (err == 0)
	{
		printf("The file 'crt_fopen_s.c' was opened\n");
		fscanf_s(f, "%d", &a, 1)
			printf("%d", a);
		fclose();
	}
	else
	{
		printf("The file 'crt_fopen_s.c' was not opened\n");	
	}
}
