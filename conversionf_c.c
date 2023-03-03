/* basic c program to covert celsius to fahrenheit and fahrenheit to celsius heat*/
#include<stdio.h>
int main()
{
 float celsius,fehrenheit,CELSIUS,FEHRENHEIT;
 printf("enter the value of celsius:" );
 scanf("%f",&celsius);
 printf("enter the value of fehrenheit");
 scanf("%f",&fehrenheit);
 CELSIUS=(fehrenheit-32)*5/9;   // which is used to covert from fehrenheit to celsius
 FEHRENHEIT=((9*celsius)/5)+32;  //which is used to covert from celsius to fehrenheit
 printf(" \n  %f celsius  <--> %f fehrenheit ",celsius,FEHRENHEIT);
 printf("\n  %f fahrenheit  <--> %f celsius ",fehrenheit,CELSIUS);
 return 0;
}
