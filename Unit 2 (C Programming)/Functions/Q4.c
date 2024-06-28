#include "stdio.h"

// find the power of a number using recursive function
int power (int base , int PowerNum );

void main()
{
	int base,pow;
	printf ( "Enter a base  number : ");
	scanf ("%d" , &base );
	printf ( "Enter the power degree : ");
	scanf ("%d",&pow) ;
	printf ( "The power (%d) of %d is %d ",pow,base,power(base,pow)) ;

}

int power (int base,int PowerNum)
{
	if (PowerNum != 0)
	return base * power(base,PowerNum -1) ;
	else
	return 1 ;
	}


