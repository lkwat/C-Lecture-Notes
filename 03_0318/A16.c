#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int a, r;
	do
	{
		printf("Please input an integer: (n>0) ");
		scanf("%d", &a);
		fflush(stdin);
	}while (a<=0);
	printf("The reverse is ");
	while (a!=0) 
	{
		r=a%10;
		a=a/10;    
		printf("%d", r);
	}
	printf("\n");
    system("pause");
    return 0;
}
