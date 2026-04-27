#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i;
	int a[100];
	int b[100];
	for(i=1; i<100; i++)
	{
		b[i]=i;
	}
	a[0]=0;
	for (i=1; i<100; i++)
	{
		a[i]=b[i]+a[i-1];
	}
	printf("%d\n", a[60]-a[50]);  //1+2+..........+60 
	system("pause");
	return 0; 
}

