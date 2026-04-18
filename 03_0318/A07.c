#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	int i=1, sum=0;
	while (i<=10)
	{
		sum+=i;      // Add i to sum (equivalent to sum = sum + i)
		i++;		 // Increment i by 1 (equivalent to i = i + 1)
	} 
	printf("Accumulated sum = %2d\n", sum);
	system("pause");
	return 0;
} 
