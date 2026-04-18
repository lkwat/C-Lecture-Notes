#include<stdio.h>
#include<stdlib.h>
void display(void);
int main(void)
{
	display();
	return 0;	
}

void display(void)
{
	int i;
	int j;
	for (i=0; i<5 ;i++)
	{
		for (j=0; j<5-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
