#include <stdlib.h>
#include <stdio.h>
void variable(int *);
int main(void)
{
	int a=886, *ptr;
	ptr=&a;
	variable(ptr);
	system("pause");
	return 0;
}
void variable(int *ptr)
{
	printf("Variable content: %d\n", *ptr);
}
