#include <stdlib.h>
#include <stdio.h>
int func(int b[], int);
int i;
int main(void)
{
	int a[10]={1, 3, 9, 2, 5, 8, 4, 9, 6, 7};
	printf("%d\n", func(a, 10));
	
	system("pause");
	return 0; 
}
int func(int a[], int n)
{
	int index=0;
	for (i=1; i<=n-1; i++)
	{
		if (a[i]>=a[index])
		{
			index=i;
		}
	}
	return index;
}

