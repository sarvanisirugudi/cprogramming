/*A basic c program compute the sum of gp (1+x+x^2+x^3+......+x^n)*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i,sum=0;
    printf("enter the value of x and n:");
    scanf("%d %d",&x,&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+pow(x,i);
    }
    printf("SUM IS:%d",sum);
    return 0;
}