#include <stdio.h>
// print product of two given numbers
void main (void)
{
	float num1,num2,product;
	printf("Enter two numbers:");
	scanf("%f \n %f", &num1, &num2);
	product= num1*num2;
	printf("product:%f", product);
}
