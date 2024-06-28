#include <stdio.h>

//Calculate sum of natural numbers

void main ()
{
	int i, n, sum=0;
	printf("Enter an integer: ");
	scanf("%d", &n);
	if (n>0)
	{
		for(i=1;i<=n;i++)
			{
				sum+=i;
			}
		printf("Sum = %d", sum);
	}
	else
		printf("input is not a positive number");

}
