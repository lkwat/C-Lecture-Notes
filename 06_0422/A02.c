#include <stdlib.h>
#include <stdio.h>
void showChar(char, int);
int main(void)
{
	int i, n;
	printf("Please input the layer: ");
	scanf("%d", &n);
	fflush(stdin);
	for(i=0; i<n; i++)
	{
		showChar(32, n-i-1);
		showChar(65+i, i*2+1);
		printf("\n");
	}
	system("pause");
	return 0; 
}
void showChar(char ch, int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("%c", ch);
	}
 } 


