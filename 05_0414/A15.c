#include<stdio.h>
#include<stdlib.h>
void sum(int), fac(int);
int main(void)
{
	fac(4);
	sum(4);
	fac(6);
	sum(6);
	fac(7);
	sum(7);
	return 0;
}
void fac(int a)
{
	int i, total=1;
	for(i=1; i<=a; i++)
	{
		total=total*i;
	}
	printf("1x2x...x%d=%d\n", a, total);
}
void sum(int b)
{
	int j, total=0;
	for (j=1; j<=b; j++)
	{
		total=total+j;
	}
	printf("1+2+...+%d=%d\n", b, total);
}

