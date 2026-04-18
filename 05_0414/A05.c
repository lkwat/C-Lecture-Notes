#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=0;
	char str[50];
	printf("Pleast input a string:\n");
	gets(str);
	while (str[i]!='\0')
	{
		if (str[i]>=65&&str[i]<=90)
		{
			str[i]+=32;
		}
		i++;
	}
	printf("Convert uppercase letters to lowercase: %s\n", str);
	return 0;
}
