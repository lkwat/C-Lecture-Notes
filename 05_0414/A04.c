#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char name[15];
	puts("What's your name?");
	fgets(name, sizeof(name), stdin);;
	puts("Hi! ");
	puts(name);
	puts("How are you?");
	
	return 0;
}
