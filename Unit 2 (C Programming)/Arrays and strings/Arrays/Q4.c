#include <stdio.h>

int main()
{
	int no,b[100],ins,loc,i;
	printf("Enter no of elements : ");
	scanf("%d",&no);

    printf("Enter the elements ");
	for(i=0;i<no;i++)
        scanf("%d",&b[i]);

	printf("Enter the element to be inserted: ");
    scanf("%d",&ins);

	printf("Enter the location : ");
    scanf("%d",&loc);

   //freeing a space
	for(i=no-1;i>=loc-1;i--)
	   b[i+1]=b[i];

   //Inserting the element
	b[loc-1]=ins;

	for(i=0;i<=no;i++ )
        printf("%d",b[i]);

}
