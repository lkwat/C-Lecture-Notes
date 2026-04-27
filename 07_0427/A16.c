#include <stdlib.h>
#include <stdio.h>
int *max(int *, int *);    //回傳用指標 
int main(void)
{
	int a=56, b=78, *ptr;
	ptr=max(&a, &b);
	printf("max=%d\n", *ptr);
	system("pause");
	return 0;
}
int *max(int *a, int *b)
{
	if(*a>*b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
