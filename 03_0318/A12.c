#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int num;
	char ch;
	printf("Please input an integer: ");
	scanf("%d", &num);
	fflush(stdin);
	printf("Please input a character: ");
	scanf("%c", &ch);
	fflush(stdin);
	printf("num=%d, The ASCII code of the character you enter(%c) = %d\n", num, ch, ch);
    system("pause");
    return 0;
}
