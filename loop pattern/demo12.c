#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
       for(j=5;j>=i;j--)
       {
        if(i==1||i==j||j==5)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
       }
       printf("\n");
    }
}