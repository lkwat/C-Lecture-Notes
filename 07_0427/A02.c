#include <stdlib.h>
#include <stdio.h>
void peri(double);
void area(double);
const double pi=3.14;   //全域變數 //定義const  不能再更改 
int main(void)
{
	double r=1.0;
	printf("pi=%.6f\n", pi);
	printf("radus=%.2f\n", r);
	peri(r);
	area(r);
	system("pause");
	return 0;
}
void peri(double r)
{
	printf("Circumference=%.2f\n", 2*pi*r);    //圓周長 
}
void area(double r)
{
	printf("Circular area=%.2f\n", pi*r*r);    //圓面積 
}
