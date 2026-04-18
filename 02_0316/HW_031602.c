#include <stdlib.h> 
#include <stdio.h>
int main(void)
{
	int radius = 6;
	float perimeter, area;
	perimeter = radius*2*3.14;
	printf("The circumference of your circle is %.2f centimeters.\n", perimeter);
	area = radius*radius*3.14;
	printf("The area of your circle is %.2f square centimeters.\n", area);
	system("pause");
	return 0;
 } 
 
/*
請由鍵盤輸入圓的半徑,  輸出圓的周長及圓的面積。 
*/
