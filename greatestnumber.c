/*a basic c program to find greatest number from given three numbers*/
#include<stdio.h>
int main()
{
  int a,b,c,ans;
  printf("enter the values of a, b and c:");
  scanf("%d %d %d",&a,&b,&c);
  ans=a>c?(a>b?a:b):(c>b?c:b);
  printf("%d is greatest number",ans);
  return 0;
}
