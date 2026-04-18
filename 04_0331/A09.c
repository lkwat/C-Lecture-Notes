#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int array[3][3];
	int num=1;
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			array[i][j]=num++;
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

