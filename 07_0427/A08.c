#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int *ptri;    //int:4 byte, 1 byte = 8 bits
	char *ptrc;   //char:1 byte
	printf("sizeof(ptri)=%d\n", sizeof(ptri));
	printf("sizeof(ptrc)=%d\n", sizeof(ptrc));
	printf("sizeof(*ptri)=%d\n", sizeof(*ptri));
	printf("sizeof(*ptrc)=%d\n", sizeof(*ptrc));
	system("pause");
	return 0;
}

