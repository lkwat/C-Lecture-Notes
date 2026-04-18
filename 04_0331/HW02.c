#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("Please enter an integer: ");
	scanf("%d", &num);
	if (num%2==0){
		printf("The number you inputed is an even integer.");
	}	
	else{
		printf("The number you inputed is an odd integer.");
	}
	return 0;
}

