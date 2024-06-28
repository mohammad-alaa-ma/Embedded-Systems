#include <stdio.h>
#include <string.h>

//Reverse array using pointers

void main(void)
{
	int arr[50];
	int* pti = arr;
	int x,i;
	printf("Input the number of elements to store in the array(max 15): ");
	scanf("%d",&x);
	printf("Input %d number of elements in the array: \n",x);
	for(i=0;i<x;i++)
	{
		printf("element - %d : ",i+1);
		scanf("%d",pti);
		pti++;
	}
	pti--;
	printf("The elements of array in reverse order are : \n");
	for(i=x-1;i>=0;i--)
	{
		printf("element - %d : %d\n",i+1,*pti);
		pti--;
	}

}
