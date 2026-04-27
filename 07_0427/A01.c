#include <stdlib.h>
#include <stdio.h>
void show(int[]);
int main(void)
{
	int IOT[4]={5, 6, 7, 8, };
	printf("The contents of the array: ");
	show(IOT);
	system("pause");
	return 0;
}
void show(int CC[])
{
	int i;
	for (i=0; i<4; i++)
	{
		printf("%d ", CC[i]);
	}
	printf("\n");
}
