#include <stdio.h>

int main()
{
	int a[100],no,search,i=0,k=0;
	printf("Enter no of elements : ");
	scanf("%d",&no);
	for(i=0;i<no;i++)
		scanf("%d",&a[i]);

	printf("Enter the element to be searched : ");
	scanf("%d",&search);

	for(i=0;i<no;i++)
	{
		if (a[i]==search)
			printf("Number %d found at the location = %d",search,i+1);
	}

	}

