#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int A[5]={7, 48, 30, 17, 62};
	int i, min, max;
	min=A[0];
	max=A[0];
	for(i=1; i<5; i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
		if(A[i]<min)
		{
			min=A[i];
		}
	}
	printf("The maximum value of the array element: %d\n", max);
	printf("The minimum value of the array element: %d\n", min);
	return 0;
}

