#include<stdio.h>
#include<stdlib.h>
#define SQUARE n*n
int main(void)
{
	int n;
	printf("Please input an integer: ");
	scanf("%d", &n);
	fflush(stdin);
	printf("%dx%d=%2d\n", n, n, SQUARE);
	return 0;
}
