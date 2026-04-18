#include<stdio.h>
#include<stdlib.h>
void display(char, int);
int main(void)
{
    int num;
    char ch;
    printf("Please input a character:");
    scanf("%c", &ch);
    fflush(stdin);
    printf("How many characters do you want to print: ");
    scanf("%d", &num);
    fflush(stdin);
    display(ch, num);
    
	return 0;
}
void display(char ch, int num)
{
	int i;
	for(i=1; i<=num; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
}

