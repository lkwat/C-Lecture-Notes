#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i=1;
	int sum=0;
	while(i<=100)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("1+2...+100所有奇數的總和= %d\n", sum);
	
	i=2;
	sum=0;
	while(i<=100)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("1+2...+100所有偶數的總和= %d\n", sum);
	system("pause");
	return 0;
}


