#include <stdio.h>
// swapping two numbers
void main ()
{
	float a, b, swap;
	printf("Enter value of a:");
	scanf("%f", &a);

	printf("Enter value of b:");
	scanf("%f", &b);

	swap=a;
	a=b;
	b=swap;
	printf("\nAfter swapping, value of a = %g", a);
	printf("\nAfter swapping, value of b = %g", b);
}
