#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int eight[8];
	int i=0;
	int sum=0;
	for (i=0; i<8; i++){
		printf("Please input an integer:\nnumber%d: ", i+1);
		scanf("%d", &eight[i]);
		fflush(stdin);
	}
	printf("The numbers you inputed are: ");
	for(i=0; i<8; i++)
	{
		printf("%d ", eight[i]);
		sum=sum+eight[i];
	}
	printf("\nAnd their sum is %d", sum);

	return 0;
}

