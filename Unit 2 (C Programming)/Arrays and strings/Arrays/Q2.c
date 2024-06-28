#include <stdio.h>

int main()
{
	int n,i;
	float b[100],average=0;
	printf("Enter the numbers of data: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
		printf("%d. Enter number: ",i+1);
		scanf("%f",&b[i]);
		average+=b[i];
	}
	average/=n;
	printf("Average = %.2f",average);

}
