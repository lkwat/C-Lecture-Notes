#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i;
	for (i=1; i<=15; i++)
	{
		if (i%2==1)
		{
		 	continue;
		}
		else if (i==12)
		{
			break;
		}
		printf("i=%d\n", i);
	} 
    system("pause");
    return 0;
}
