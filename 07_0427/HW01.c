#include <stdlib.h>
#include <stdio.h>
void couont(int *);
int main(void)
{
	float num=12.6f;
	int *ptr;
	ptr=&num;
	printf("num=%.2f, The address of num:%p ", num, &num);
	printf("\nptr=%p, The address of ptr:%p ", ptr, &ptr);
}
