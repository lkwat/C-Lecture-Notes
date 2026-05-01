#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	unsigned char ch=53;
	unsigned char ix=5;
	ch=ch<<1;
	printf("ch=%x\n", ch);
	ch=ch<<1;
	printf("ch=%x\n", ch);
	ch=ch<<1;
	printf("ch=%x\n", ch);
	ch=ch>>1;
	printf("ch=%x\n", ch);
	ch=ch>>1;
	printf("ch=%x\n", ch);
	system("pause");
	return 0;
}

