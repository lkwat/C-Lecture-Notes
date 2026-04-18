#include<stdio.h>
#include<stdlib.h>
int add(int, int);
int main(void)
{
    int sum=0, a=5, b=6;
    sum=add(a, b);
    printf("%d+%d=%d\n", a, b, sum);
	return 0;
}
int add(int x, int y)
{
	return x+y;
}
