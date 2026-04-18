#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j;
	int sale[2][4];
	int firstHalf=0;
	int secondHalf=0;
	for (i=0; i<2; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("salesperson %d %d quarter result: \n", i+1, j+1);
			scanf("%d", &sale[i][j]);
			fflush(stdin);
		}
	}
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			firstHalf=firstHalf+sale[i][j];
		}
	}
	printf("The sales amount of first half year is %d\n", firstHalf);

	for (i=0; i<2; i++) 
	{
		for (j=2; j<4; j++)
		{
			secondHalf=secondHalf+sale[i][j];
		}
	}
	printf("And the sales amount of second half year is %d", secondHalf);
	return 0;
}

