/* A basic c program to print floyd triangle*/
#include<stdio.h>
int main()
{
    int a=1,i,j,n;
    printf("\n enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}