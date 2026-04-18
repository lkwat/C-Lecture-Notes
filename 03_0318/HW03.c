#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	int x, y, sum;
	printf("Please enter how many bottles of bubble tea would you like to buy: ");
	scanf("%d", &x);
	fflush(stdin);
	printf("Please enter how many bottles of ulong latta would you like to buy: ");
	scanf("%d", &y);
	fflush(stdin);		
	sum=x*45+y*55;
	if(x+y>=15 && sum>=800)
	{
		sum=0.9*sum;
		printf("Total=%d\n", sum);	
	}
	else
	{
	printf("Total=%d\n", sum);
	}
	system("pause");
	return 0;
}

