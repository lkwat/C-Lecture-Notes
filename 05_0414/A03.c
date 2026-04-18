#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num1, num2;
	char str[30];
	printf("Input two number: \n");
	scanf("%d %d", &num1, &num2);
	printf(" ==> %d + %d = %d\n\n", num1, num2, num1+num2);
	printf("Input a string: \n");
	scanf("%s", &str);
	printf(" ==> %s \n\n", str);
	printf("Input at most 10 chars: \n");
	scanf("%10s", &str);
	printf(" ==> %s \n\n", str);
	
	return 0;
}
