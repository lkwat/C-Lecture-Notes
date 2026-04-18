#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j;
	int sale[2][4];
	int sum=0;
	for (i=0; i<2; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("salesperson %d %d quarter result: \n", i+1, j+1);
			scanf("%d", &sale[i][j]);
			fflush(stdin);
		}
	}
	printf("*******************************");
	for (i=0; i<2; i++) 
	{
		for (j=0; j<4; j++)
		{
			sum=sum+sale[i][j];
		}
	}
	printf("\n2025 result for total sales value of %d iphone\n", sum);
	return 0;
}

