#include <stdio.h>

int main()
{
	int e,f,i,k;
	int a[100][100],b[100][100];
	printf("Enter rows and column of matrix: ");
	scanf("%d %d",&e,&f);

	printf("Enter elements of matrix: \n");
	for (i=0;i<e;i++)
		for(k=0;k<f;k++)
        {
			printf("Enter elements a%d%d: ",i+1,k+1);
			scanf("%d",&a[i][k]);
		}

	printf("Entered Matrix: \n");
	for (i=0;i<e;i++)
	{
		for(k=0;k<f;k++)
        {
			printf("%d\t",a[i][k]);
			b[k][i]=a[i][k];
		}
		printf("\n");
	}

	printf("Transpose of Matrix: \n");
	for (i=0;i<f;i++)
	{
		for(k=0;k<e;k++)
        {
			printf("%d\t",b[i][k]);
		}
		printf("\n");
	}

}
