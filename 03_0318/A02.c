#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	char ch='c';
	short int s=-2;
	int i=5;
	double d=6.28;
	printf("(ch/s)-(d/s)-(s+i)=%f\n", (ch/s)-(d/s)-(s+i));	  //-49+3.14-3
	
	system("pause");
	return 0;
} 
