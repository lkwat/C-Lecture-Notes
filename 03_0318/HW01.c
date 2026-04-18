#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i, n;
	do
	{
		printf("Please input a positive integer less than 50: (0<n<50)");
		scanf("%d", &n);

	}while (n<=0 || n>50);

		for(i=1; i<=n; i=i+1)
		{
			if(i%3==0)
			{
				printf("%d ", i);
			} 
		} 

    system("pause");
    return 0;
}
