#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	int arr[5]={34, 76, 33, 42, 76};
	int *ptr=arr;
	int i;
	printf("arr[5]={");
	for (i=0; i<5; i++)
	{
		if (i!=4)
		{
			printf("%d, ", *(ptr+i));
		}
		else
		{
			printf("%d}\n", *(ptr+i));
		}
	}
	printf("\nAfter adding 10 to the value\n\n");
	printf("arr[5]={");
	for (i=0; i<5; i++)
	{
		if(i!=4)
		{
			printf("%d, ", *(ptr+i)+10);	
		}	
		else
		{
			printf("%d}\n", *(ptr+i)+10);
		}
	}	
	system("pause");
	return 0;
}


