#include <stdlib.h>
#include <stdio.h>
void add(int *);
int main(void)
{
	int a=20;
	int *ptr;
	ptr=&a;
	printf("Before call add() function, a=%d\n", a);
	add(ptr);
	printf("After call add() function, a=%d\n", a);	
	system("pause");
	return 0;
}
void add(int *ptr)
{
	*ptr=*ptr+30;
}
