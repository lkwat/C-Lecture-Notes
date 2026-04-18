#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	int total=0, value=0;
	printf("Please input an integer: ");
	scanf("%d", &value);
	total=total+value;
	printf("Please input an integer: ");
	scanf("%d", &value);
	total=total+value;
	printf("Total: %d\n", total);
	printf("Please input an integer: ");
	scanf("%d", &value);
	total=total+value;
	printf("Total: %d\n", total);
	system("pause");
	return 0;
 } 
 
/*
寫法可以簡化

把
total=total+value;
改成
total += value;

程式會更簡潔。
*/ 
