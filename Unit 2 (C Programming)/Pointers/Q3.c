#include <stdio.h>
#include <string.h>

// Reverse a string using pointers

void main(void)
{
    char inputString[50];
    char reversedString[50];
    char* reversedPointer = reversedString;

    printf("Enter the string : ");
    gets(inputString);

    char* originalPointer = inputString + strlen(inputString)-1;

    while (originalPointer != inputString)
    {
        *reversedPointer = *originalPointer;
        originalPointer--;
        reversedPointer++;
    }

   *reversedPointer = *originalPointer;
   reversedPointer++;
   *reversedPointer = '\0';

    printf("The string after reverse : %s", reversedString);

}
