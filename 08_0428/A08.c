#include <stdlib.h>
#include <stdio.h> 
int main(void)
{
	char name[20];
	char *ptr="How are you?";
	printf("What's your name?\n");
	gets(name);
	printf("Hi, %s. ", name);
	puts(ptr);	
	system("pause");
	return 0;
}

