# include <stdio.h>

/*Check if a letter is a vowel or constant*/
void main ()
{
	char alphabet;
	printf("Enter an alphabet: ");
	scanf("%c", &alphabet);
	if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
		printf("%c is a vowel", alphabet);
	else
		printf("%c is a constant", alphabet);

}
