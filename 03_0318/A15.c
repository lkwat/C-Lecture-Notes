#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int n, i=1, sum=0;
	do
	{
		printf("Please input the value of n: (n>0)");
		scanf("%d", &n);
		fflush(stdin);
	}while (n<=0);
	do
	{
		sum+=i;			//sum=sum+i
		i++;
	}while (i<=n);
	printf("1+2+...+%d=%d\n", n, sum);
    system("pause");
    return 0;
}
