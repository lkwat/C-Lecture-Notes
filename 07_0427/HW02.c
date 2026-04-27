#include <stdlib.h>
#include <stdio.h>
void count(int *);
int main(void)
{
	int num=0;
	int *ptr;
	ptr=&num;
	int i;
	for(i=1; i<=5; i++)
	{
		count(&num);	
	}
	printf("num: %d\n", num);
	system("pause");
	return 0;
}

void count(int *a)
{
	*a=*a+1;
}
