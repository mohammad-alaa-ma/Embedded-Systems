#include <stdio.h>

/*Find largest of 3 numbers*/
void main()
{
	float a,b,c;
	printf("Enter three numbers: ");
	scanf("%f\n%f\n%f", &a, &b, &c);

	if(a>b && a>c)
		printf("Largest number = %.2f", a);
	if(b>a && b>c)
		printf("Largest number = %.2f", b);
	if(c>a && c>b)
		printf("Largest number = %.2f", c);
}
