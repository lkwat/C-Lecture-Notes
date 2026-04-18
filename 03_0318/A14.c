#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i=1;
	do
	{
		if(i%3==1)
		{
			printf("%d\n", i);
		}
		i++;
	}while (i<=10);
    system("pause");
    return 0;
}
