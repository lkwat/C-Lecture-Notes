#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i;
	for (i=1; i<=50; i++)
	{
		int square=i*i;
		if (square>1000)
		{
			printf("The first square number greater than 1000: %d\n", square);
			printf("i=%d\n", i);
			break;
		}
	} 
    system("pause");
    return 0;
}
