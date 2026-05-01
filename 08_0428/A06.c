#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	int AB[5]={13, 15, 17, 19, 11};
	int i, sum=0;
	int *ptr;
	ptr=AB+1;
	printf("*ptr=%d\n", *ptr);
	printf("*(ptr+1)=%d\n", *(ptr+1));
	printf("*(ptr-1)=%d\n", *(ptr-1));
	printf("*(ptr+2)=%d\n", *(ptr+2));
	system("pause");
	return 0;
}

