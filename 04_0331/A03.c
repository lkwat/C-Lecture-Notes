#include<stdio.h>
#include<stdlib.h>
#define PASSWD 1234 

int main(void)
{
	int passwd;
	int flag=0, retry=1;
	do
	{
		printf("%d. Enter your password:\n", retry++);
		scanf("%d", &passwd);
		fflush(stdin);
		if(passwd==PASSWD)
		{
			flag=1;
		} 
	}while (!flag&&(retry<=3));
	if (flag==1)
	{
		printf("Congratulations!\n");
	} 
	else
	{
		printf("You are rejected\n");
	}
	return 0;
}
