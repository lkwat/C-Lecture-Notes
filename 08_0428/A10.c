#include <stdlib.h>
#include <stdio.h> 
int *maximum(int *);
int main(void)
{
	int AB[6]={23, 37, 58, 97, 75, 92};
	int i, *ptr;
	printf("Array AB[]= ");
	for (i=0; i<6; i++)
	{
		printf("%d ", AB[i]);
	} 
	ptr=maximum(AB);
	printf("\nmaximum=%d\n", *ptr);
	system("pause");
	return 0;
}
int *maximum(int *ptr)
{
	int i, *max;
	max=ptr;
	for (i=1; i<6; i++)
	{
		if(*max<*(ptr+i))
		{
			max=ptr+i;
		}
	}
	return max;
}
