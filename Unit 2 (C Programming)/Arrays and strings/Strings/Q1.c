#include <stdio.h>

int main()
{
	char a[100],b;
	int i,c=0;
	printf("Enter a string: ");
	gets(a);
	printf("Enter a character to find frequency: ");
	scanf("%c",&b);
	for(i=0;a[i]!='\0';i++)
		if(b==a[i])
			c++;

	printf("Frequency of %c = %d",b,c);
}
