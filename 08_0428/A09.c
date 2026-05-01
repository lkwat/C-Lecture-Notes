#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	char *aa="Hello";
	char *bb="World";
	char *tmp;
	printf("Before swap: aa= %s bb= %s\n", aa, bb);
	tmp=aa;
	aa=bb;
	bb=tmp;
	printf("After swap: aa= %s bb= %s\n", aa, bb);
	system("pause");
	return 0;
}

