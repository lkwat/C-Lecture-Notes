#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j;
	int maze[5][10];
	for (i=0; i<5; i++)
	{
		for (j=0; j<10; j++)
		{
			maze[i][j]=(i+1)*(j+1);
		}
	}
	for (i=4; i>=0; i--)
	{
		for (j=9; j>=0; j--)
		{
			printf("%4d", maze[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}

