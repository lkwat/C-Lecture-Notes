#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, sum;
	sum=0;
	float average;
	int arr[7];
	printf("Please input 7 integers: " );
	scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);
	fflush(stdin);
	for (i=0; i<7; i++)
	{
		printf("%d ", arr[i]);
		sum=sum+arr[i];
	}
	printf("\nsum=%d\n", sum);
	average= sum/7;
	printf("average= %.2f", average);
	
	return 0;
}

