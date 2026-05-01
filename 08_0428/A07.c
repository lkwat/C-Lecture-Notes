#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	int IOTA[6]={1, 4, 2, 8, 6, 10};
	int i=0, sum=0;
	int *ptr=IOTA;
	while (i<6)
	{
		sum=sum+*(ptr++);
		i++;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

