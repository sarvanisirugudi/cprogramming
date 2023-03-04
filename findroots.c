/*A basic c program to find the roots of a quadratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2;
    printf("enter the values of a,b and c:"); // here a,b,c are coeffients of equation
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\n root1:%f ,root2: %f are roots of equations",r1,r2);
        printf("\n roots are real");
    }
    else if(d==0)
    {
      r1=r2=(-b/(2*a));
      printf("\n root1=root2=%f",r1);
      printf("\n roots are equal");
    }
    else
    {
        printf("\n  Imaginary roots");
    }
    return 0;
}