#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],i,j,r1,r2,c1,c2;
	printf("enter no of rowa and columns of first matrix:");
	scanf("%d %d",&r1,&c1);
	printf("enter elements of first matrix:");
	for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	printf("enter no of rowa and columns of second matrix:");
	scanf("%d %d",&r2,&c2);
	printf("enter elements of second matrix:");
	for(i=0;i<r2;i++)
	{
	for(j=0;j<c2;j++)
	{
		scanf("%d",&b[i][j]);
	}
	}
	for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
		sum[i][j]=a[i][j]+b[i][j];
	}
	}
	printf("sum of matrix \n");
	for(i=0;i<r1;i++)
	{
	printf("\n");
	for(j=0;j<c1;j++)
	{
		printf("\t%d",sum[i][j]);
	}
	}
	return 0;
}
		