#include <stdio.h>

void main()
{
	float a[2][2],b[2][2],sum[2][2];
	int i,d;

	printf("Enter the elements of 1st matrix \n");
	for (i=0;i<2;i++)
		for (d=0;d<2;d++)
		{
			printf("Enter a%d%d:",i+1,d+1);
			scanf("%f",&a[i][d]);
		}

	printf("Enter the elements of 2nd matrix \n");
	for (i=0;i<2;i++)
		for (d=0;d<2;d++)
		{
			printf("Enter b%d%d:",i+1,d+1);
			scanf("%f",&b[i][d]);
		}

	for ( i=0;i<2;i++)
		for (d=0;d<2;d++)
			sum[i][d]=a[i][d]+b[i][d];


		printf("Sum Of Matrix: \n");
		for (i=0;i<2;i++)
		{
			for(d=0;d<2;d++)
            {
				printf("%.1f \t",sum[i][d]);
            }
			printf("\n");

		}
	}
