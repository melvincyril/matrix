#include<stdio.h>
int main()
{
	int arr1[3][3],i,j;
	printf("input elements for the matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("elements-[%d],[%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nthe matrix is: \n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",arr1[i][j]);
	}
	printf("\n\n");
}
