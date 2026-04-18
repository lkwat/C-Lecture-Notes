#include<stdio.h>
#include<stdlib.h>
int abs(int);
int main(void)
{
    int i;
    printf("Please input an integer: ");
    scanf("%d", &i);
    fflush(stdin);
	printf("abs(%d)=%d\n", i, abs(i));    
	return 0;
}
int abs(int x)
{
	if (x<0)
		return -x; 
	else
		return x;
}

