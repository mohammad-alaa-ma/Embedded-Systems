#include <stdio.h>
// checking a given number (even or odd)
void main ()
{
	int x;
	printf("Enter an integer you want to check:");
	scanf("%d",&x);
	if (x%2 == 0)
		printf("%d is even", x);
	else
		printf("%d is odd", x);
}
