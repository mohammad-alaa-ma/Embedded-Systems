#include "stdio.h"

/*Calculator*/
void main ()
{
	char operator;
	float a, b, c;
	printf("Enter an operator either + or - or * or / : ");
	scanf("%c", &operator);
	printf("Enter two operands: ");
	scanf("%f\n%f", &a,&b);

	switch (operator)
	{
	case '+':
	{
		c=a+b;
		printf("%.2f + %.2f = %.2f", a, b, c);
	}
	break;
	case '-':
	{
		c=a-b;
		printf("%.2f - %.2f = %.2f", a, b, c);
	}
	break;
	case '*':
	{
		c=a*b;
		printf("%.2f * %.2f = %.2f", a, b, c);
	}
	break;
	case '/':
	{
		c=a/b;
		printf("%.2f / %.2f = %.2f", a, b, c);
	}
	break;
	default:
		printf("Invalid operator");
		break;
	}

}
