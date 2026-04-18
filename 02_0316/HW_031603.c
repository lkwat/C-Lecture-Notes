#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf(
	"Please enter three different numbers:\n");
	printf("Number 1: ");
	scanf("%d", &a);
	printf("Number 2: ");
	scanf("%d", &b);
	printf("Number 3: ");
	scanf("%d", &c);
	if (a>b&&a>c)
	{
		printf("%d is the biggest number among %d, %d and %d", a, a, b, c);
	}
	else if (b>a&&b>c)
	{
		printf("%d is the biggest number among %d, %d and %d", b, a, b, c);
	}
	else
	{
		printf("%d is the biggest number among %d, %d and %d", c, a, b, c);
	}
	system("pause");
	return 0;
 } 
 
/*
叫级糶祘Α块ぃ俱计礛[ifelse if]т硂计程
*/
