/*A basic c program to check whether given number is palindrome or not */
#include<stdio.h>
int main()
{
    int sum=0,temp,n,r;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum=(sum*10)+r;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("%d is palindrome",n);
    }
    else
    {
        printf("%d is not a palindrome",n);
    }
    return 0;
}