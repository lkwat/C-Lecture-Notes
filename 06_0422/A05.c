#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[]="This is a pen.";
	char str1[20], str2[20];
	char str3[]="Hay! ";
	printf("str: \"%s\"\n", str);
	strcpy(str1, "This is a book.");
	strcpy(str2, str);
	printf("str1: \"%s\"\n", str1);
	printf("str2: \"%s\"\n", str2);
	strcat(str3, str1);
	printf("str3: \"%s\"\n", str3);
	system("pause");
	return 0; 
}

