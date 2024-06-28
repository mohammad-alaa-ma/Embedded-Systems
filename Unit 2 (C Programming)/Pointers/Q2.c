#include <stdio.h>
//Printing alphabets using pointers

void main(void)
{
	char alphabet[27];
	char *ptr = alphabet;
	int i;

	for(i=0;i<26;i++)
	{
		*ptr++ = 'A'+ i;
		ptr++;
	}

	ptr=alphabet;

	for(i=0;i<26;i++)
	{
		printf("%c ",*ptr++);
		ptr++;
	}
}
