#include <stdio.h>
// print ascii code of a given character
void main (void)
{
	char letter;
	printf("Enter a character:");
	scanf("%c", &letter);
	printf("ASCII value of %c = %d",letter,letter );
}
