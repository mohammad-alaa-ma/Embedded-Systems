#include "stdio.h"
// reverse a statement without using strings
void reverse ();

void main ()
{
	printf ("Enter a sentence: ");
	reverse ();
}

void reverse ()
{
	char a;
	scanf("%c",&a);

	if(a != '\n')
    {
		reverse ();
		printf ("%c",a);
	}

}

