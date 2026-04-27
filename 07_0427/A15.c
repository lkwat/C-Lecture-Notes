#include <stdlib.h>
#include <stdio.h>
void rect(int, int, int *, int *);
int main(void)
{
	int a=5, b=8;
	int area, peri;
	rect(a, b, &area, &peri);
	printf("area=%d, total length=%d\n", area, peri);
	system("pause");
	return 0;
}
void rect(int a, int b, int *aa, int *pp)
{
	*aa=a*b;
	*pp=2*(a+b);
}
