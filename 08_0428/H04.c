#include <stdlib.h>
#include <stdio.h> 

int main(void)
{
	int abc[5]={10, 20, 30, 40, 50};
	int *ptr=abc;
	int i;
	for(i=4; i>=0; i--)
	{
		printf("%d, ", *(ptr+i));
	}
	system("pause");
	return 0;
}

