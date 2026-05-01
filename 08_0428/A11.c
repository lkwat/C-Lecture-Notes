#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	int IOT[5]={31, 17, 33, 22, 16};
	int *ptr=IOT;
	int i;
	printf("IOT[5]={");
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
	printf("\nAfter adding 7 to the value\n\n");
	printf("IOT[5]={");
	for (i=0; i<5; i++)
	{
		if(i!=4)
		{
			printf("%d, ", *(ptr+i)+7);	
		}	
		else
		{
			printf("%d}\n", *(ptr+i)+7);
		}
	}	
	system("pause");
	return 0;
}


