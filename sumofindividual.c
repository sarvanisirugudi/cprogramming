/*A basic c program to find sum of individual digit of a positive integer*/
#include<stdio.h>
int main()
{
    int sum=0,r,n,temp;
    printf("\n enter the n:");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum+=r;
        temp=temp/10;
    }
    printf("%d is sum of individual digits of positive integer %d",sum,n);
    return 0;
}