/* A basic c program to find wheather the given number is prime number or not*/
#include<stdio.h>
int main()
{
    int a=0,i,num;
    printf("\n enter a number:");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            a=1;
            break;
        }
    }
    if(a==1)
    {
        printf("\n %d is composite number",num);
    }
    else
    {
        printf("\n %d is prime number",num);
    }
    return 0;
}