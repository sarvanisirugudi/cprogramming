/* to find area o triangle using heron's formula */
#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float s,area;
  printf("enter the values of a,b and c:"); //here a,b and c are sides of triangle
  scanf("%d %d %d",&a,&b,&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c)); //heron's formula
  printf("AREA OF TRIANGLE :%f",area);
  return 0;

}
