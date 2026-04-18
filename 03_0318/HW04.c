#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	int num;
	int count = 0;
	
	for(num=0; num<=200; num++)
	{
		if(num%4==0)
		{
			count=count+1;
		}	
		
	}
	
	printf("The number of positive integers less than 200 which can be divided by 4 are : %d", count);
	return 0;
}

