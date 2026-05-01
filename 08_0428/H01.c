#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	int a=15, b=16;
	int *ptrA, *ptrB;
	ptrA=&a;
	ptrB=&b;
	printf("(*ptrA)*(*ptrB)= %d\n", (*ptrA)*(*ptrB));
	
	system("pause");
	return 0;
}

