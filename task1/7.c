//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include <stdio.h>
#include <math.h>
int main()
{
    int number,h,m,s;
    printf("Enter the number :");
    scanf("%d",&number);
    h=number/3600;
    printf("Hours : %d",h);
    printf("\n");
    m=(number%3600)/60;
    printf("minutes : %d",m);
    printf("\n");
    s=(number%3600)%60;
    printf("Seconds : %d",s);
    printf("\n");
    return 0;
}