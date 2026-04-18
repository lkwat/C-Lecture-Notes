#include<stdio.h>
#include<stdlib.h>
void kitty(int k);
int main(void)
{
	int k;
	printf("Please input a number: ");
	scanf("%d", &k);
	kitty(k);
	return 0;
}

void kitty(int k)
{
	int i;
	for(i=1; i<=k; i++)
	{
		printf("\"Hello Kitty\"\n");
	}
}
