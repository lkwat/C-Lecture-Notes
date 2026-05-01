#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	int A[6]={11, 48, 30, 17, 65, 37};
	int i, max, min;
	min=max=0;
	for (i=1; i<6; i++)
	{
		if(*(A+i)>*(A+max))
		{
			max=i;
		}
		if(*(A+i)<*(A+min))
		{
			min=i;
		}
	}
	printf("The index of maximum value in A is %d\n", max);
	printf("The index of minimum value in A is %d\n", min);
	system("pause");
	return 0;
}

