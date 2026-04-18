#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int x, i, sum=0;
	for(i=1; i<=50; i++)
	{
		x=1+2*(i-1);
		sum=sum+x;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
