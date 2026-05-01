#include <stdlib.h>
#include <stdio.h> 
void square(int *arr);

int main(void)
{
	int c[5]={2, 4, 6, 8, 10};
	int i;
	printf("Array c[]= ");
	for(i=0; i<5; i++)
	{
		printf("%d ", c[i]);
	}
	printf("\nAfter square () function, array c[]= ");
	square(c);
    printf("\n");
	system("pause");
	return 0;
}
void square(int *arr)
{
	int i;
	for(i=0; i<5; i++)
	{
    	*(arr + i) = (*(arr + i)) * (*(arr + i)); 
    	printf("%d ", *(arr + i));
    }
}
		
