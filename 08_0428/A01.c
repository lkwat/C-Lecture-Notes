#include <stdlib.h>
#include <stdio.h> 
//©_¼Æ++
//°¸¼Æ-- 
void update(int [], int);
int main(void)
{
	int i;
	int arr[6]={23, 46, 37, 57, 42, 9};
	printf("Before update:\n");
	for (i=0; i<6; i++)
	{
		printf("%2d ", arr[i]);
	}
	printf("\n");
	update(arr, 6);
	printf("After update:\n");
	for (i=0; i<6; i++)
	{
		printf("%2d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
void update(int arr[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		if (arr[i]%2==1)
		{
			arr[i]++;
		}
		else
		{
			arr[i]--;
		}
	}
}
