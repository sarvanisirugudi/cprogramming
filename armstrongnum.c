/* A basic c program to find whether the given number is armstrong number or not*/
#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,num,r,n;
    printf("\n enter a number:");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        r=n%10;
        sum+=pow(r,3);
        n=n/10;
    }
    if(sum==num)
    {
        printf("%d is armstrong number",num);
    }
    else
    {
        printf("%d is not an armstrong number",num);
    }
    return 0;
}