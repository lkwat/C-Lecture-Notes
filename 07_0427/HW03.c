#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int n;
	int AK[7]={23, 39, 77, 74, 25, 82, 91};
	printf("Which number in the array do you want to change? no: ");
	scanf("%d", &n);
	AK[n-1]=99;
	printf("AK[%d] is now 99\n", (n-1));
	system("pause");
	return 0;
}


