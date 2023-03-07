/* A basic c program to store information of a book using structure*/
#include<stdio.h>
struct bookdetails
{
    char name[20];
    char author[20];
    int pages;
    float price;
}var;
int main()
{
    printf("\n enter book name:\t");
    scanf("%s",var.name);
    printf("\n enter number of pages:\t");
    scanf("%d",&var.pages);
    printf("\n enter book price:\t");
    scanf("%f",&var.price);
    printf("\n enter author of the book:\t");
    scanf("%s",var.author);
    printf("*********** BOOK DETAILS***********");
    printf("BOOK NAME--%s\n",var.name);
    printf("NUMBER OF PAGES--%d\n",var.pages);
    printf("BOOK PRICE--%f \n",var.price);
    printf("BOOK AUTHOR--%s \n",var.author);
    return 0;
}