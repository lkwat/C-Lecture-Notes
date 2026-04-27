#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int *ptr;
	int num=20;
	ptr=&num;
	printf("num=%d, &num=%p,\n", num, &num);
	printf("*ptr=%d, ptr=%p, &ptr=%p\n", *ptr, ptr, &ptr);

	system("pause");
	return 0;
}

