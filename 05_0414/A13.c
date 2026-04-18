#include<stdio.h>
#include<stdlib.h>
float sweight(float, int);
int main(void)
{
	int sex;
	float weight, height;
	printf("Gender (0)Female  (1)Male: ");
	scanf("%d", &sex);
	fflush(stdin);
	printf("Please enter height(cm): ");
	scanf("%f", &height);
	fflush(stdin);
	weight=sweight(height, sex);
	printf("Your ideal body weight is %.1f kg\n", weight);
	return 0;
}
float sweight(float height, int sex)
{
	float ret;
	if (sex==0)
	{
		ret=(height-70)*0.6;
	}
	else
	{
		ret=(height-80)*0.7; 
	}
	return ret;
}
