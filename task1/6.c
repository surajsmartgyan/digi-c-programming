//Write a C program to read an amount (integer value) and break the amount into the smallest
//possible number of bank notes
#include <stdio.h>
#include <math.h>
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,amount;
    printf("Enter the amount :");
    scanf("%d",&amount);
    n1=amount/100;
    printf("100 Number of notes :%d",n1);
    printf("\n");
    n2=(amount%100)/50;
    printf("50 Number of notes :%d",n2);
    printf("\n");
    n3=((amount%100)%50)/20;
    printf("20 Number of notes :%d",n3);
    printf("\n");
    n4=(((amount%100)%50)%20)/10;
    printf("10 Number of notes :%d",n4);
    printf("\n");
    n5=((((amount%100)%50)%20)%10)/5;
    printf("5 Number of notes :%d",n5);
    printf("\n");
    n6=(((((amount%100)%50)%20)%10)%5)/2;
    printf("2 Number of notes :%d",n6);
    printf("\n");
    n7=((((((amount%100)%50)%20)%10)%5)%2)/1;
    printf("1 Number of notes :%d",n7);
    printf("\n");

    return 0;
}