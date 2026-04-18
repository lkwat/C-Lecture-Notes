#include<stdio.h>
#include<stdlib.h>
float power(float, int);
int main(void)
{
    float x;
    int n;
    printf("Please input (base  exponent): ");
    scanf("%1f %d", &x, &n);
    printf("%.1f to the power of %d = %.1f\n", x, n, power(x, n));
	return 0;
}
float power(float x, int n)
{
	int i;
	float pow=1.0f;
	for (i=0; i<n; i++)
	{
		pow=pow*x;
	}
	return pow;
}
