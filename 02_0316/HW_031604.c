#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	int i, sum=0;
	for(i=0; i<=10; i++)
	{
		sum=sum+i*i;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
} 
 
/*
請撰寫一程式，運用for迴圈,  計算1^2+2^2+3^2+…+10^2 
*/
