#include "stdio.h"
// finding prime numbers between two numbers
int checkprime ( int num ) ;

void main ()
{
	int x,y,flag,i;
	printf ("Please enter two numbers: ") ;
	scanf ("%d %d" ,&x ,&y ) ;
	printf ("The prime numbers between %d and %d are :", x , y ) ;

	for (i= x+1;i<y;++i)
    {
		flag = checkprime (i) ;
		if (flag==0)
			printf (" %d ", i) ;
	}

}
// prime numbers are not divisible by any number except 1 and itself.
int checkprime (int num )
{
	int j ,flag=0 ;
	for (j= 2;j<=num/2;j++)
	{
		if ( num%j==0)
        {
			flag = 1 ;
			break ;
		}
	}

return flag ;
}


