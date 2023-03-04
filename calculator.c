/*A basic c program to make a simple calculator*/
#include<stdio.h>
#include<math.h>
int main()
{
 int n1,n2,ch;
 printf("\n 1.ADDITION \n 2.SUBSTRACTION \n 3.MULTIPLICATION \n 4.DIVISION");
 printf("\n enter the values of n1 and n2:");
 scanf("%d %d",&n1,&n2);
 printf("\n enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
    case 1:printf("SUM:%d",n1+n2);
            break;
    case 2:printf("DIFFERENCE:%d",n1-n2);
            break;
    case 3:printf("product:%d",n1*n2);
            break;
    case 4:printf("DIVISION:%d",n1/n2);
            break;
    default:printf("enter valid choice");
 }
    return 0;
}