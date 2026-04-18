#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
    char grade;
    printf("Please enter a grade (e.g., A or a): ");
    scanf("%c", &grade);
    switch(grade)
    {
    	case'A':
    	case'a':
    		printf("Excellent!\n");
    		break;
    	case'B':
    	case'b':
    		printf("Good!\n");
    		break;
    	case'C':
    	case'c':
    		printf("Keep studying hard!\n");
            break;
        default:
        	printf("You did not pass. Please try again.\n");
	}
    
	system("pause");
	return 0;
} 
