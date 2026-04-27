#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int a=8, b=9;
	int *ptr;
	ptr=&a;
	printf("&a=%p, &ptr=%p, ptr=%p, *ptr=%d\n", &a, &ptr, ptr, *ptr);
	ptr=&b;
	printf("&b=%p, &ptr=%p, ptr=%p, *ptr=%d\n", &b, &ptr, ptr, *ptr);
	system("pause");
	return 0;
}

