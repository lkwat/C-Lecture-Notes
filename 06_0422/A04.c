#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[]="xyz";
	char str2[]="abcdef";
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	printf("==========================\n");
	strcat(str1, str2);
	printf("after strcat(str1, str2)\n");
	printf("str1:%s\n", str1);	
	printf("str2:%s\n", str2);
	system("pause");
	return 0; 
}

