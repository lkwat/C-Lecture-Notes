#include <stdlib.h>
#include <stdio.h>
int weather(void);
void comment(int);
int main(void)
{
	comment(weather());
	system("pause");
	return 0; 
}
int weather(void)
{
	int temperature;
	printf("Please enter the current temperature: ");
	scanf("%d", &temperature);
	fflush(stdin);
	return temperature;
}
void comment(int temperature)
{
	if(temperature>=27)
	{
		printf("It's hot now\n");
	}
	else if (temperature>16)
	{
		printf("This is a comfortable temperature\n");
	}
	else if (temperature>8)
	{
		printf("It's a little cold\n");
	}
	else
	{
		printf("cold weather\n");
	}
}

