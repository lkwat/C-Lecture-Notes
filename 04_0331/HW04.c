#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=200;
	do
	{
		if(i%3==0 && i%7==0)
		printf("%d\n", i);
		fflush(stdin);
		i++;
	}while (i<=500);

	return 0;
}

